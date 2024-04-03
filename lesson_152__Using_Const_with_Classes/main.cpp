/**
 * Section 13
 * Subject: OOP Classes and objects
 * Lesson 152 [ Using const with Classes ]
 *
 * Expected result:
            Name: Villain;
            Helth: 100;
            Xp: 55;
            _Name: Villain
            -----------
            Name: Hero;
            Helth: 200;
            Xp: 70;
            _Name: Hero
            -----------
 *
 */

#include <iostream>
#include <vector>

using namespace std;

class Player
{
private:
    string name;
    int helth{};
    int xp{};

public:
    void set_name(string name) { this->name = name; };
    string get_name() const { return this->name; };
    void print_state() const;

    // The Constructor implementation
    Player(string name = "None", int helth = 0, int xp = 0)
    {
        this->name = name;
        this->helth = helth;
        this->xp = xp;
    }

    // Copy Constructor implementation
    Player(const Player &source) : Player{source.name, source.helth, source.xp}
    {
    }

    // Destructor
    ~Player() {}
};

void Player::print_state() const
{
    cout << "Name: " << this->name << ";" << endl;
    cout << "Helth: " << this->helth << ";" << endl;
    cout << "Xp: " << this->xp << ";" << endl;
    return;
};

template <typename T>
void display_name(const T obj)
{
    // since method get_name() marked as CONST it will work, other wise it trow ERROR
    cout << "_Name: " << obj.get_name() << endl;
}

int main()
{
    {
        const Player villain{"Villain", 100, 55};
        // villain.set_name("Super Villain");// Trow ERROR, since it's a const Object
        villain.print_state(); // since method print_state() marked as CONST it will work, other wise it trow ERROR
        display_name(villain); // since method get_name() marked as CONST it will work, other wise it trow ERROR
    };
    cout << "-----------" << endl;
    {
        Player Hero{"Hero", 200, 70};
        Hero.print_state(); // print_state() can work without CONST in tis casse, since object isn't CONST
        display_name(Hero); // since method get_name() marked as CONST it will work, other wise it trow ERROR
    }
    cout << "-----------" << endl;

    cout << "-= END =-" << endl;
    return 0;
}
