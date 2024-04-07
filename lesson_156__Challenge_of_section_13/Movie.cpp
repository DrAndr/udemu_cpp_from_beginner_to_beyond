#include "Movie.h"

using namespace std;

Movie::Movie(string name, string rating, int watched)
{
    this->name = name;
    this->rating = rating;
    this->watched = watched;
}

Movie::Movie(const Movie &movie) : Movie{movie.name, movie.rating, movie.watched} {}

void Movie::set_name(string name) { this->name = name; };
void Movie::set_rating(string rating) { this->rating = rating; };
void Movie::set_watched(int watched) { this->watched = watched; };
void Movie::increment_watched() { ++watched; }

string Movie::get_name() const { return name; };
string Movie::get_rating() const { return rating; };
int Movie::get_watched() const { return watched; };

Movie::~Movie() {}