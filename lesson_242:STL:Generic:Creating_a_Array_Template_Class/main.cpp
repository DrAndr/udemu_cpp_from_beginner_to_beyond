/**
 * Section 20
 * Subject: Standard Template Library [ STL, Generic ]
 * Lesson 242 [ Creating a Array Template Class ]
 *
 * Expected result:
            The size of nums is: 5
            [ 32759 279402419 1 31 0 ]

            The size of nums is: 5
            [ 0 0 0 0 0 ]

            [ 10 10 10 10 10 ]

            [ 1000 10 10 2000 10 ]

            The size of nums2 is: 100
            [ 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ]

            The size of strings is: 10
            [ Frank Frank Frank Frank Frank Frank Frank Frank Frank Frank ]

            [ Larry Frank Frank Frank Frank Frank Frank Frank Frank Frank ]

            [ X X X X X X X X X X ]
 */

#include <iostream>
#include <string>

using namespace std;

template <typename T, int N>
class Array
{
    int size{N};
    T values[N];

    friend std::ostream &operator<<(std::ostream &os, const Array &rhs)
    {
        os << "[ ";
        for (const auto &val : rhs.values)
            os << val << " ";
        os << "]" << std::endl;
        return os;
    }

public:
    Array() = default;
    Array(T val)
    {
        for (auto &item : values)
            item = val;
    }

    void fill(T val)
    {
        for (auto &item : values)
            item = val;
    }

    int get_size() const
    {
        return size;
    }

    // overloaded subscript operstor for easy use
    T &operator[](int index)
    {
        return values[index];
    }
};

int main()
{

    Array<int, 5> nums;
    std::cout << "The size of nums is: " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;

    nums.fill(0);
    std::cout << "The size of nums is: " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;

    nums.fill(10);
    std::cout << nums << std::endl;

    nums[0] = 1000;
    nums[3] = 2000;
    std::cout << nums << std::endl;

    Array<int, 100> nums2{1};
    std::cout << "The size of nums2 is: " << nums2.get_size() << std::endl;
    std::cout << nums2 << std::endl;

    Array<std::string, 10> strings(std::string{"Frank"});
    std::cout << "The size of strings is: " << strings.get_size() << std::endl;
    std::cout << strings << std::endl;

    strings[0] = std::string{"Larry"};
    std::cout << strings << std::endl;

    strings.fill(std::string{"X"});
    std::cout << strings << std::endl;

    std::cout << std::endl;
    return 0;
}
