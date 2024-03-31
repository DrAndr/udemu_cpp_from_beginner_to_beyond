/**
 * Section 13
 * Subject: OOP Classes and objects
 * Lesson 141 [ Constructors and Destructors ]
 *
 * Expected result:
            0) No args constructor called;
            Destructor called for: slayer
            --------------------------
            0) No args constructor called;
            1) Constructor with passing "name" called;
            3) Constructor with passing all params called;
            Destructor called for: _-Villain-_
            Destructor called for: -_Hero_-
            Destructor called for: Frank
            --------------------------
            0) No args constructor called;
            3) Constructor with passing all params called;
            --------------------------
            Destructor called for: Enemy
            Destructor called for: -=::Level boss::=-
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
    Player();
    Player(string name)
    {
        cout << "1) Constructor with passing \"name\" called;" << endl;
        this->set_name(name);
    };
    Player(int helth)
    {
        cout << "2) Constructor with passing\"helth\" called;" << endl;
        this->set_helth(helth);
    };
    Player(string name, int helth, int xp)
    {
        cout << "3) Constructor with passing all params called;" << endl;
        this->set_name(name);
        this->set_helth(helth);
        this->set_xp(xp);
    };

    void set_name(string name) { this->name = name; };
    void set_helth(int helth) { this->helth = helth; };
    void set_xp(int xp) { this->xp = xp; };

    ~Player();
};

// outside constructor and destructor implemntation
Player::Player() { cout << "0) No args constructor called;" << endl; }
Player::~Player() { cout << "Destructor called for: " << this->name << endl; }

int main()
{
    {
        Player slayer;
        slayer.set_name("slayer");
    }
    cout << "--------------------------" << endl;
    {
        Player frank; // 3 will destructed THIRD
        frank.set_name("Frank");

        Player hero("Hero"); // adding name via constructor  // 2 will destructed SECOND
        hero.set_name("-_Hero_-");

        Player villain("Villain", 100, 12); // 1 will destructed FIRST
        villain.set_name("_-Villain-_");
    }
    cout << "--------------------------" << endl;

    Player *enemy = new Player;
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level boss", 1000, 300);
    level_boss->set_name("-=::Level boss::=-");

    cout << "--------------------------" << endl;

    // ⚠️ destructor for pointers will called only when we run deleting of thos pointers
    delete enemy;
    delete level_boss;

    cout << endl;
    return 0;
}
