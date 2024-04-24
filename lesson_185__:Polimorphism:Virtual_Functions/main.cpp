/**
 * Section 15
 * Subject: Polimorphism
 * Lesson 185 [ Virtual Functions ]
 *
 * Expected result:
 *
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
    virtual ~User(){};
};

class Editor : public User
{
public:
    virtual void righits() const
    {
        std::cout << "Editor: can create new publications." << std::endl;
    };
    ~Editor(){};
};

class Admin : public User
{
public:
    virtual void righits() const
    {
        std::cout << "Admin: can create posts and add/delete new users and editors." << std::endl;
    };
    ~Admin(){};
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
        v_us->righits();

    delete user;
    delete editor;
    delete admin;

    std::cout << std::endl;
    return 0;
}
