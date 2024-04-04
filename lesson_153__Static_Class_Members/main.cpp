/**
 * Section 13
 * Subject: OOP Classes and objects
 * Lesson 153 [ Static Class Members ]
 *
 * Expected result:
 *
 */

#include <iostream>
#include <vector>
#include "Player.h"

using namespace std;
using namespace lesson_153;

void display_active_players()
{
    cout << "Active players: " << Player::get_num_players() << endl;
}

int main()
{
    display_active_players();

    Player hero{"Hero", 100, 15}; //++

    display_active_players();

    {
        Player frank{"Frank"};//++
        display_active_players();
    } // --
    display_active_players();

    Player *enemy = new Player("Enemy"); // ++
    display_active_players();
    delete enemy; // --
    display_active_players();

    cout << "-= END =-" << endl;
    return 0;
}
