/**
 * Section 15
 * Subject: Polimorphism
 * Lesson 185 [ Virtual Functions ]
 *
 * Expected result:
 === print manualy ===
            User: can read posts.
            Editor: can create new publications.
            Admin: can create posts and add/delete new users and editors.

            === print Array ===
            Admin: can create posts and add/delete new users and editors.
            Editor: can create new publications.
            User: can read posts.

            === print Vector ===
            Admin: can create posts and add/delete new users and editors.
            Destructor of Admin
            Destructor of User
            Editor: can create new publications.
            Destructor of Editor
            Destructor of User
            User: can read posts.
            Destructor of User
            -= END =-
 */

#include <iostream>
#include <vector>

class User
{
public:
    virtual void righits() const
    {
        std::cout << "User: can read posts." << std::endl;
    };
    virtual ~User() { std::cout << "Destructor of User" << std::endl; };
};

class Editor : public User
{
public:
    virtual void righits() const override
    {
        std::cout << "Editor: can create new publications." << std::endl;
    };
    ~Editor() { std::cout << "Destructor of Editor" << std::endl; };
};

class Admin : public User
{
public:
    virtual void righits() const override
    {
        std::cout << "Admin: can create posts and add/delete new users and editors." << std::endl;
    };
    ~Admin() { std::cout << "Destructor of Admin" << std::endl; };
};

int main()
{
    User *user = new User;
    User *editor = new Editor;
    User *admin = new Admin;
    std::cout << "=== print manualy ===" << std::endl;
    user->righits();
    editor->righits();
    admin->righits();

    std::cout << "\n=== print Array ===" << std::endl;

    User *arrayUsers[] = {admin, editor, user};

    for (User *us : arrayUsers)
        us->righits();

    std::cout << "\n=== print Vector ===" << std::endl;

    std::vector<User *> vectorUsers{admin, editor, user};

    for (User *v_us : arrayUsers)
    {
        v_us->righits();
        delete v_us;
    }

    // delete user;
    // delete editor;
    // delete admin;

    std::cout << "-= END =-" << std::endl;
    return 0;
}
