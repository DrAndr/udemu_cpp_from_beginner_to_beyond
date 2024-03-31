/**
 * Section 13
 * Subject: OOP Classes and objects
 * Lesson 144 [ Constructor initialization Lists ]
 *
 * Expected result:
        Name: slayer
        Helth: 0
        Xp: 0
        --------------------------
        Name: Enemy
        Helth: 100
        Xp: 10
        --------------------------
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
    // Overloaded constructors
    // usage a Constructor_initialization_Lists is more eficient
    Player() : name{"None"}, helth{0}, xp{0} {
                                           // Insted of asigning value in the constructor body
                                           // name = "None";
                                           // helth = 0;
                                           // xp = 0;
                                       };
    Player(string name_val) : name{name_val}, helth{0}, xp{0} {};
    Player(string name_val, int helth_val, int xp_val) : name{name_val}, helth{helth_val}, xp{xp_val} {};

    void set_name(string name) { this->name = name; };
    void set_helth(int helth) { this->helth = helth; };
    void set_xp(int xp) { this->xp = xp; };
    void print_stats()
    {
        cout << "Name: " << name << endl;
        cout << "Helth: " << helth << endl;
        cout << "Xp: " << xp << endl;
    }
    ~Player(){};
};

int main()
{
    {
        Player slayer{"slayer"};
        slayer.print_stats();
    }

    cout << "--------------------------" << endl;

    Player *enemy = new Player("Enemy", 100, 10);
    enemy->print_stats();
    cout << "--------------------------" << endl;

    // ⚠️ destructor for pointers will called only when we run deleting of thos pointers
    delete enemy;
    cout << endl;
    return 0;
}
