/**
 * Section 13
 * Subject: OOP Classes and objects
 * Lesson 155 [ Friends of class ]
 *
 * Expected result:
            The User Stats
            Name: Frenk;
            Helth: 100;
            Xp: 50;
            ===========================Print player stats via User Obj
            The Player Stats
            Name: Hero;
            Helth: 1000;
            Xp: 500;
            -= END =-
 */

#include <iostream>
#include <vector>

using namespace std;

class Player
{
    friend class User; // Class user have access to the privare attr of the Player

private:
    string name;
    int helth{};
    int xp{};

public:
    Player(string name = "None", int helth = 0, int xp = 0)
    {
        this->name = name;
        this->helth = helth;
        this->xp = xp;
    }

    Player(const Player &source) : Player{source.name, source.helth, source.xp} {};
    void print_player()
    {
        cout << "The Player Stats" << endl;
        cout << "Name: " << name << "; " << endl;
        cout << "Helth: " << helth << "; " << endl;
        cout << "Xp: " << xp << "; " << endl;
    }
    ~Player(){};
};

class User
{
private:
    string name;
    int helth{};
    int xp{};

public:
    User(string name = "None", int helth = 0, int xp = 0)
    {
        this->name = name;
        this->helth = helth;
        this->xp = xp;
    }

    User(const User &source) : User{source.name, source.helth, source.xp} {};
    void print_user()
    {
        cout << "The User Stats" << endl;
        cout << "Name: " << name << "; " << endl;
        cout << "Helth: " << helth << "; " << endl;
        cout << "Xp: " << xp << "; " << endl;
    }
    void print_player(Player &p)
    {
        cout << "The Player Stats" << endl;
        cout << "Name: " << p.name << "; " << endl;
        cout << "Helth: " << p.helth << "; " << endl;
        cout << "Xp: " << p.xp << "; " << endl;
    }
    ~User(){};
};

int main()
{

    User frenk{"Frenk", 100, 50};
    Player hero{"Hero", 1000, 500};

    frenk.print_user();
    cout << "===========================Print player stats via User Obj" << endl;
    frenk.print_player(hero);

    cout << "-= END =-" << endl;
    return 0;
}
