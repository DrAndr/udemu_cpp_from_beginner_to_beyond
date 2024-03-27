/**
 * Section 13
 * Subject: OOP Classes and objects
 * Lesson 137 [ Declaring a classes and createing objects ]
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
    /*
     * by default all attributes and methods is private
     */

public: // after this modifier, all attributes and methods will be public
    // attributes
    string name{"Player"};
    int helth{100};
    int xp{};

    // methods
    // void talk(string);

    void talk(string message)
    {
        cout << name << " says: " << message << endl;
        return;
    }
    bool is_alive();
};

class Account
{
    // attributes
    string name{"Costumer"};
    double balance{};

    // methods
    bool withdraw(double);
    bool deposit(double);
};

int main()
{
    Account frank_account;
    Account jim_account;

    // ============================= //

    Player frank; // object
    Player hero;

    cout << "----- Default params ------" << endl;

    cout << "Name: " + frank.name << endl;    // Player
    cout << "Helth: " << frank.helth << endl; // 100
    cout << "Xp: " << frank.xp << endl;       // 0

    cout << "----- Updated params ------" << endl;

    frank.name = "Frank";
    frank.helth = 200;
    frank.xp = 100;
    cout << "Name: " + frank.name << endl;    // Frank
    cout << "Helth: " << frank.helth << endl; // 200
    cout << "Xp: " << frank.xp << endl;       // 100

    cout << "----- Methods usage ------" << endl;

    frank.talk("Hi there!"); 

    // ------------------

    // array of objects belong to the Player class
    Player players[]{frank, hero};

    // vector <Player> : this is a collection of the Player objects
    vector<Player> players_vec{frank};
    players_vec.push_back(hero); // hero will be added to the end

    // ------------------

    // create object on heap [pointer]
    Player *enemy{nullptr};
    enemy = new Player;
    
    (*enemy).name =  "Enemy";
    // OR other sintaxis:
    enemy->helth = 300;
    enemy->xp = 500;

    enemy->talk("I'll destroy you!");

    // ...

    delete enemy; // don't forgot to delete pointer

    cout << endl;

    return 0;
}
