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
    // attributes
    string name{"Player"};
    int helth{100};
    int xp{};

    // methods
    void talk(string);
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

    // ------------------

    // array of objects belong to the Player class
    Player players[]{frank, hero};

    // vector <Player> : this is a collection of the Player objects
    vector<Player> players_vec{frank};
    players_vec.push_back(hero); // hero will be added to the end

    // ------------------

    // create object on heap
    Player *enemy{nullptr};
    enemy = new Player;

    // ...

    delete enemy; // don't forgot to delete pointer

    cout << endl;

    return 0;
}
