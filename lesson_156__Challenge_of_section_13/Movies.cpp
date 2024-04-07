#include <iostream>
#include <string>
#include <vector>
#include "Movies.h"

using namespace std;

Movies::Movies(/* args */)
{
}

bool Movies::add_movie(string name, string rating, int watched)
{
    if (movies.size() > 0)
        for (Movie movie : movies)
            if (movie.get_name() == name)
                return false;

    movies.push_back(Movie{name, rating, watched});
    return true;
};
bool Movies::increment_watched(string name)
{
    if (movies.size())
        for (Movie &movie : movies)
            if (movie.get_name() == name)
            {
                movie.increment_watched();
                return true;
            }

    return false;
};

void Movies::display()
{
    cout << "\n~~~~~~~~~~ * * * ~~~~~~~~~~" << endl;
    if (movies.size() > 0)
        for (Movie movie : movies)
            cout << movie.get_name() << ", " << movie.get_rating() << ", " << movie.get_watched() << ";" << endl;
    else
        cout << "Nothing to display;" << endl;

    cout << "\n~~~~~~~~~~ * * * ~~~~~~~~~~" << endl;
};

Movies::~Movies()
{
}