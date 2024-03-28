/**
 * Section 13
 * Subject: OOP Classes and objects
 * Lesson 139 [ Class Members Access Modifiers  ]
 *          public - accesible everywhere
 *          private - accesible only by members or friends of the class
 *          protected - used with inheritance - more detail in the next section
 *
 * Expected result:
        ----- Default params ------
        Name: Player
        Helth: 100
        XP: 0
        ----- Updated params ------
        Name: Frank
        Helth: 200
        Xp: 100
        ----- Lets talk ------
        Frank says: Hi there!
        Frank says: Hi there!
 */

#include <iostream>
#include <string>

#include "Player.h"

using namespace std;

int main()
{
    Player *frank{new Player};

    cout << "----- Default params ------" << endl;

    frank->print_stat();

    cout << "----- Updated params ------" << endl;

    // frank->name; // Call ERROR when run compile... since name is private

    /**
     * we can use public getters and setters for
     * accessing to private attributes
     */

    frank->set_name("Frank");
    frank->set_helth(200);
    (*frank).set_xp(100); // OR other sintaxis, but result similar;

    // *****  we can print it manualy  ****** //
    cout << "Name: " + frank->get_name() << endl;    // Frank
    cout << "Helth: " << frank->get_helth() << endl; // 200
    cout << "Xp: " << frank->get_xp() << endl;       // 100

    cout << "----- Lets talk ------" << endl;

    frank->talk("Hi there!");
    (*frank).talk("Hi there!");

    delete frank; // don't forgot to delete pointer

    cout << endl;

    return 0;
}
