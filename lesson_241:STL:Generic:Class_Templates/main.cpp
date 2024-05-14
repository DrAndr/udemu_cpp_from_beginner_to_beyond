/**
 * Section 20
 * Subject: Standard Template Library [ STL, Generic ]
 * Lesson 241 [ Classe templates ]
 *
 * Expected result:

            =========  Item<int> item1{"Andrey", 100}; =========
            Nmae: Andrey, value: 100

            =========  Item item1{"Andrey", 200}; =========
            Nmae: Andrey, value: 200
            Nmae: Andrey, value: Developer

            =========  Item<Item<std::string>> item{"Andrey", {"Bsckend", "Developer"}}; =========
            Nmae: Andrey, value.name: Backend, value.value: Developer

            ========= My_Pair() usage =========
            Amount: 100
            100500, 12.3
 */

#include <iostream>

template <typename T>
class Item
{
    std::string name;
    T value;

public:
    Item(std::string name, T value) : name{name}, value{value} {};
    std::string get_name() { return name; };
    T get_value() { return value; };
};

template <typename T1, typename T2>
struct My_Pair
{
    T1 first;
    T2 second;
};

int main()
{
    {
        std::cout << "\n=========  Item<int> item1{\"Andrey\", 100}; =========" << std::endl;
        Item<int> item1{"Andrey", 100};
        std::cout << "Nmae: " << item1.get_name() << ", value: " << item1.get_value() << std::endl;

        std::cout << "\n=========  Item item1{\"Andrey\", 200}; =========" << std::endl;
        Item item2{"Andrey", 200};
        std::cout << "Nmae: " << item2.get_name() << ", value: " << item2.get_value() << std::endl;
    }

    {
        Item<std::string> item{"Andrey", "Developer"};
        std::cout << "Nmae: " << item.get_name() << ", value: " << item.get_value() << std::endl;
    }

    {
        std::cout << "\n=========  Item<Item<std::string>> item{\"Andrey\", {\"Bsckend\", \"Developer\"}}; =========" << std::endl;
        Item<Item<std::string>> item{"Andrey", {"Backend", "Developer"}};
        std::cout << "Nmae: " << item.get_name() << ", value.name: "
                  << item.get_value().get_name()
                  << ", value.value: "
                  << item.get_value().get_value()
                  << std::endl;
    }

    std::cout << "\n========= My_Pair() usage =========" << std::endl;
    {
        My_Pair<std::string, int> p1{"Amount", 100};
        std::cout << p1.first << ": " << p1.second << std::endl;
        My_Pair<int, double> p2{100500, 12.3};
        std::cout << p2.first << ", " << p2.second << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
