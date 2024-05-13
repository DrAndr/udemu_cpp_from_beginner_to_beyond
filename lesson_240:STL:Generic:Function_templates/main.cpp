/**
 * Section 20
 * Subject: Standard Template Library [ STL, Generic ]
 * Lesson 240 [ Function templates ]
 *
 * Expected result:
========= Compare objects =========
                    Person p1{"Batman", 35};
                    Person p2{"Flash", 25};
                    Person p3 = max(p1, p2);
                    p3 = Batman

                    ========= template <typename T> =========
                    ========= T max(T a, T b) { return (a > b) ? a : b; } =========
                    max<int>(3, 7) = 7
                    max(3, 7) = 7
                    max('A', 'X') = X
                    max(157.21, 88.43) = 157.21
                    max(5 + 2 * 8, 6 + 9 * 3) = 33

                    ========= template <typename T1, typename T2> =========
                    display<int,int>(10,20) = 10, 20
                    display(10,20) = 10, 20
                    display('F','D') = F, D
                    display(44, 44.1) = 44, 44.1
                    display('L', 15.5) = L, 15.5
 */

#include <iostream>

template <typename T>
T max(T a, T b) { return (a > b) ? a : b; }

template <typename T1, typename T2>
void display(T1 a, T2 b)
{
    std::cout << a << ", " << b << std::endl;
}

struct Person
{
    std::string name;
    int age;

    bool operator>(const Person &rhs) const { return this->age > rhs.age; }
};

int main()
{
    std::cout << "\n========= Compare objects =========" << std::endl;

    Person p1{"Batman", 35};
    Person p2{"Flash", 25};

    std::cout << "Person p1{\"Batman\", 35};" << std::endl;
    std::cout << "Person p2{\"Flash\", 25};" << std::endl;
    std::cout << "Person p3 = max(p1, p2);" << std::endl;
    Person p3 = max(p1, p2);
    std::cout << "p3 = " << p3.name << std::endl;

    std::cout << "\n========= template <typename T> =========" << std::endl;
    std::cout << "========= T max(T a, T b) { return (a > b) ? a : b; } =========" << std::endl;

    std::cout << "max<int>(3, 7) = " << max<int>(3, 7) << std::endl;
    std::cout << "max(3, 7) = " << max(3, 7) << std::endl;
    std::cout << "max('A', 'X') = " << max('A', 'X') << std::endl;
    std::cout << "max(157.21, 88.43) = " << max(157.21, 88.43) << std::endl;
    std::cout << "max(5 + 2 * 8, 6 + 9 * 3) = " << max(5 + 2 * 8, 6 + 9 * 3) << std::endl;

    std::cout << "\n========= template <typename T1, typename T2> =========" << std::endl;

    std::cout << "display<int,int>(10,20) = ";
    display<int, int>(10, 20);
    std::cout << "display(10,20) = ";
    display(10, 20);
    std::cout << "display('F','D') = ";
    display('F', 'D');
    std::cout << "display(44, 44.1) = ";
    display(44, 44.1);
    std::cout << "display('L', 15.5) = ";
    display('L', 15.5);

    std::cout << std::endl;
    return 0;
}
