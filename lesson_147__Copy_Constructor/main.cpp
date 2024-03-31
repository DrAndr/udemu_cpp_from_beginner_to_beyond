/**
 * Section 13
 * Subject: OOP Classes and objects
 * Lesson 147 [ Copy Constructor ]
 *
 * Expected result:
                Name: slayer_clone
                Helth: 100
                Xp: 10
                Name: slayer_clone_clone
                Helth: 100
                Xp: 10
                ----------------
                Name: Enemy_clone
                Helth: 200
                Xp: 20
                Name: Enemy_clone_clone
                Helth: 200
                Xp: 20
 */

#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    string name{"Default_name"};
    int helth{};
    int xp{};

public:
    Player(string name_val = "None", int helth_val = 0, int xp_val = 0) : name{name_val}, helth{helth_val}, xp{xp_val} {};
    Player(Player &surce) : Player{surce.name + "_clone", surce.helth, surce.xp} {};

    void set_name(string name) { this->name = name; };
    void set_helth(int helth) { this->helth = helth; };
    void set_xp(int xp) { this->xp = xp; };

    string get_name() { return this->name; };
    int get_helth() { return this->helth; };
    int get_xp() { return this->xp; };

    ~Player(){};
};

void print_stats(Player p)
{
    cout << "Name: " << p.get_name() << endl;
    cout << "Helth: " << p.get_helth() << endl;
    cout << "Xp: " << p.get_xp() << endl;
}

int main()
{

    Player slayer{"slayer", 100, 10};
    Player clone{slayer};

    print_stats(slayer);
    print_stats(clone);
    cout << "----------------" << endl;

    Player *enemy = new Player("Enemy", 200, 20);
    Player clone_2{(*enemy)};

    print_stats((*enemy));
    print_stats(clone_2);

    cout << endl;
    return 0;
}
