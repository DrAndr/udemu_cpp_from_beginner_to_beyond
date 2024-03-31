/**
 * Section 13
 * Subject: OOP Classes and objects
 * Lesson 142 [ Default Constructor ]
 *
 * Expected result:
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
    /**
     * If we not provide any constructors and destructor,
     * in this casses comtiler will add it itself.
     */
    // Player(){};
    // ~Player(){};

    void set_name(string name) { this->name = name; };
    void set_helth(int helth) { this->helth = helth; };
    void set_xp(int xp) { this->xp = xp; };
};

int main()
{
    {
        Player slayer;
        slayer.set_name("slayer");
    }

    cout << "--------------------------" << endl;

    Player *enemy = new Player;
    enemy->set_name("Enemy");

    cout << "--------------------------" << endl;

    // ⚠️ destructor for pointers will called only when we run deleting of thos pointers
    delete enemy;
    cout << endl;
    return 0;
}
