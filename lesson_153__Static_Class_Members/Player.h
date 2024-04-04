#include <iostream>

using namespace std;

namespace lesson_153
{
    class Player
    {
    private:
        static int num_players;
        string name;
        int helth{};
        int xp{};

    public:
        Player(string name = "None", int helth = 0, int xp = 0);
        Player(const Player &source);

        static int get_num_players();

        ~Player();
    };

    int Player::num_players = 0;

    Player::Player(string name, int helth, int xp)
    {
        ++Player::num_players;
        this->name = name;
        this->helth = helth;
        this->xp = xp;
    }
    Player::Player(const Player &source) : Player{source.name, source.helth, source.xp} {};

    int Player::get_num_players()
    {
        return num_players;
    }

    Player::~Player()
    {
        --Player::num_players;
    }

}
