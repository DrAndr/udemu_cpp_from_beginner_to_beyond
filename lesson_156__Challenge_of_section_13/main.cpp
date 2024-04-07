/**
 * Section 13
 * Subject: OOP Classes and objects
 * Lesson 156 [ Challenge of the Section 13 ]
 *
 * Expected result:
                    ~~~~~~~~~~ * * * ~~~~~~~~~~
                    Nothing to display;

                    ~~~~~~~~~~ * * * ~~~~~~~~~~
                    Lord of the rings - has been added;
                    Star Wars - has been added;
                    Hobbit - has been added;
                    Hobbit - already exist!
                    Ice Age - has been added;

                    ~~~~~~~~~~ * * * ~~~~~~~~~~
                    Lord of the rings, PG-13, 2;
                    Star Wars, PG, 5;
                    Hobbit, PG, 7;
                    Ice Age, PG, 12;

                    ~~~~~~~~~~ * * * ~~~~~~~~~~
                    -- increment_watched --
                    Lord of the rings - watch incremented;
                    Star Wars - watch incremented;
                    Hobbit - watch incremented;
                    Ice Age - watch incremented;
                    No name - NOT FOUND!
                    -- /incremented watched --

                    ~~~~~~~~~~ * * * ~~~~~~~~~~
                    Lord of the rings, PG-13, 3;
                    Star Wars, PG, 6;
                    Hobbit, PG, 8;
                    Ice Age, PG, 13;

                    ~~~~~~~~~~ * * * ~~~~~~~~~~

 */

#include <iostream>
#include "Movies.h"

using namespace std;

void increment_watched(Movies &movies, string name);
void add_movie(Movies &movies, string name, string rating, int watched);

void increment_watched(Movies &movies, string name)
{
    if (movies.increment_watched(name))
        cout << name << " - watch incremented;" << endl;
    else
        cout << name << " - NOT FOUND!" << endl;

    return;
}

void add_movie(Movies &movies, string name, string rating, int watched)
{
    if (movies.add_movie(name, rating, watched))
        cout << name << " - has been added;" << endl;
    else
        cout << name << " - already exist!" << endl;

    return;
}

int main()
{
    Movies my_movies;

    my_movies.display();

    add_movie(my_movies, "Lord of the rings", "PG-13", 2);
    add_movie(my_movies, "Star Wars", "PG", 5);
    add_movie(my_movies, "Hobbit", "PG", 7);

    add_movie(my_movies, "Hobbit", "PG", 7); // Duplicate
    add_movie(my_movies, "Ice Age", "PG", 12);

    my_movies.display();

    cout << " -- increment_watched -- " << endl;

    increment_watched(my_movies, "Lord of the rings");
    increment_watched(my_movies, "Star Wars");
    increment_watched(my_movies, "Hobbit");
    increment_watched(my_movies, "Ice Age");
    increment_watched(my_movies, "No name");
    cout << " -- /incremented watched -- " << endl;

    my_movies.display();

    cout << endl;
    return 0;
}
