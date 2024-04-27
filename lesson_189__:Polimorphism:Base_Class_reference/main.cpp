/**
 * Section 15
 * Subject: Polimorphism
 * Lesson 189 [ Base Class reference ]
 *
 * Expected result:
            User: can read posts.
            Editor: can create new publications.
            Admin: can create posts and add/delete new users and editors.

            --- Usage get_righits() ---
            User: can read posts.
            Editor: can create new publications.
            Admin: can create posts and add/delete new users and editors.
            -= END =-
 */

#include <iostream>
#include <vector>

using namespace std;

class User
{
public:
    virtual void righits() const
    {
        cout << "User: can read posts." << endl;
    };
    virtual ~User(){};
};

class Editor : public User
{
public:
    virtual void righits() const override final
    {
        cout << "Editor: can create new publications." << endl;
    };
    ~Editor(){};
};

class Admin : public User
{
public:
    virtual void righits() const override final
    {
        cout << "Admin: can create posts and add/delete new users and editors." << endl;
    };
    ~Admin(){};
};

void get_righits(User &user) { user.righits(); };

int main()
{
    User u;
    User &ref_u = u;
    ref_u.righits();

    Editor e;
    User &ref_e = e;
    ref_e.righits();

    Admin a;
    User &ref_a = a;
    ref_a.righits();

    cout << "\n--- Usage get_righits() ---" << endl;
    User user;
    Editor editor;
    Admin admin;

    get_righits(user);
    get_righits(editor);
    get_righits(admin);

    cout << "-= END =-" << endl;
    return 0;
}
