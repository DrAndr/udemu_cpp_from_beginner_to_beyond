#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    string name{"Player"};
    int helth{100};
    int xp{};

public:
    // setters
    void set_name(string player_name) { name = player_name; };
    void set_helth(int player_helth) { helth = player_helth; };
    void set_xp(int player_xp) { xp = player_xp; };

    // getters
    string get_name() { return name; };
    int get_helth() { return helth; };
    int get_xp() { return xp; };

    void talk(string message)
    {
        cout << name << " says: " << message << endl;
        return;
    }

    void print_stat()
    {
        cout << "Name: " << name << endl;
        cout << "Helth: " << helth << endl;
        cout << "XP: " << xp << endl;
        return;
    }
};