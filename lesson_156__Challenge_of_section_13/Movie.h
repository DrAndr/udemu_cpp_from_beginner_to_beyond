#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

using namespace std;

class Movie
{
private:
    string name;
    string rating;
    int watched{0};

public:
    Movie(string name, string rating, int watched);
    Movie(const Movie &movie);

    void set_name(string name);
    void set_rating(string rating);
    void set_watched(int watched) ;
    void increment_watched();

    string get_name() const;
    string get_rating() const;
    int get_watched() const;

    ~Movie();
};

#endif
