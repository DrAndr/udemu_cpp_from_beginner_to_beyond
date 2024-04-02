/**
 * Section 13
 * Subject: OOP Classes and objects
 * Lesson 150 [ Move Constructors ]
 *
 * Expected result:
                    _____Constructor 10 | 0x7ff7b4bb64f8
                    Move Constructor 10
                    ______Destructor nullptr: 0x0 | 0x7ff7b4bb64f8
                    _____Constructor 20 | 0x7ff7b4bb64e0
                    Move Constructor 20
                    Move Constructor 10
                    ______Destructor nullptr: 0x0 | 0x7f780df059e0
                    ______Destructor nullptr: 0x0 | 0x7ff7b4bb64e0
                    _____Constructor 30 | 0x7ff7b4bb64d8
                    Move Constructor 30
                    Move Constructor 20
                    Move Constructor 10
                    ______Destructor nullptr: 0x0 | 0x7f780df05a08
                    ______Destructor nullptr: 0x0 | 0x7f780df05a00
                    ______Destructor nullptr: 0x0 | 0x7ff7b4bb64d8
                    _____Constructor 40 | 0x7ff7b4bb64d0
                    Move Constructor 40
                    ______Destructor nullptr: 0x0 | 0x7ff7b4bb64d0
                    _____Constructor 50 | 0x7ff7b4bb64c8
                    Move Constructor 50
                    Move Constructor 40
                    Move Constructor 30
                    Move Constructor 20
                    Move Constructor 10
                    ______Destructor nullptr: 0x0 | 0x7f780df05a28
                    ______Destructor nullptr: 0x0 | 0x7f780df05a20
                    ______Destructor nullptr: 0x0 | 0x7f780df05a18
                    ______Destructor nullptr: 0x0 | 0x7f780df05a10
                    ______Destructor nullptr: 0x0 | 0x7ff7b4bb64c8
                    _____Constructor 60 | 0x7ff7b4bb64c0
                    Move Constructor 60
                    ______Destructor nullptr: 0x0 | 0x7ff7b4bb64c0
                    _____Constructor 70 | 0x7ff7b4bb64b8
                    Move Constructor 70
                    ______Destructor nullptr: 0x0 | 0x7ff7b4bb64b8
                    _____Constructor 80 | 0x7ff7b4bb64b0
                    Move Constructor 80
                    ______Destructor nullptr: 0x0 | 0x7ff7b4bb64b0
                    -= END =-
                    ______Destructor *data:   80 | 0x7f780df05a78
                    ______Destructor *data:   70 | 0x7f780df05a70
                    ______Destructor *data:   60 | 0x7f780df05a68
                    ______Destructor *data:   50 | 0x7f780df05a60
                    ______Destructor *data:   40 | 0x7f780df05a58
                    ______Destructor *data:   30 | 0x7f780df05a50
                    ______Destructor *data:   20 | 0x7f780df05a48
                    ______Destructor *data:   10 | 0x7f780df05a40
 */

#include <iostream>
#include <vector>

using namespace std;

class Move
{
private:
    int *data;

public:
    void set_data(int d) { *data = d; };
    int get_data() { return *data; }

    // The Constructor implementation
    Move(int d)
    {
        data = new int;
        *data = d;
        cout << "_____Constructor " << *this->data << " | " << this << endl;
    }

    // Copy Constructor implementation
    Move(const Move &source) : Move{*source.data}
    {
        cout << "Copy Constructor " << *this->data << " | " << this << endl;
    }

    // Move Constructor implementation
    Move(Move &&source) noexcept : data{source.data}
    {
        // cout << "source.data: " << source.data << endl; // 0x7f7b0cf059d0
        // cout << "*source.data: " << *source.data << endl; // 10

        // now this->data queval to // 0x7f7b0cf059d0

        source.data = nullptr; // for prevent deleting data by ponter

        // cout << "source.data: " << source.data << endl; // 0x0

        cout << "Move Constructor " << *data << endl;
    }

    // Destructor impementation
    ~Move()
    {
        if (data != nullptr)
        {
            cout << "______Destructor *data:   " << *data << " | " << this << endl;
        }
        else
        {
            cout << "______Destructor nullptr: " << data /* Have no data value [*data] trow ERROR */ << " | " << this << endl;
        }
        delete data;
    }
};

template <typename T>
void display(T obj)
{
    cout << obj.get_data() << endl;
}

int main()
{
    vector<Move> vec;

    for (int i{10}; i <= 80; i += 10)
        vec.push_back(Move{i});

    // vec.push_back(Move{10});
    // vec.push_back(Move{20});
    // vec.push_back(Move{30});
    // vec.push_back(Move{40});
    // vec.push_back(Move{50});
    // vec.push_back(Move{60});
    // vec.push_back(Move{70});
    // vec.push_back(Move{80});

    cout << "-= END =-" << endl;
    return 0;
}
