/**
 * Section 20
 * Subject: Standard Template Library [ STL ]
 * Lesson 245 [ Iterators ]
 *
 * Expected result:
            [ A, B, C, a, b, c, d ]

            ============ 1 ===============

            std::cout << *it << std::endl;
            100

            std::cout << *it << std::endl -> 100

            it++; -> 200

            it +=2 -> 400

            it -=2 -> 200

            ============ 2 updating iterator ===============
            BEFORE
            [ 111, 222, 333, 444, 555 ]
            AFTER
            [ 0, 0, 0, 0, 0 ]

            ============ 3 const_iterator ===============
            111 222 333 444 555

            ============ 4 reverse_iterator ===============
            5 4 3 2 1
            === Const reverse iterator over a LIST ===
            Jack
            Joe
            Sam

            === iterator over a MAP ===
            Bob : Java;
            Frank : C++;
            Joe : Haskell;


            === 5 Itrator over a subset of a container ===
            [ 3 4 5 6 7  ]
 */

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

template <typename T>
void display(const std::vector<T> &vec)
{
    std::cout << "[ ";

    for (auto i = vec.begin(); i != vec.end(); i++)
        std::cout << *i << ((i + 1) != vec.end() ? ", " : "");

    std::cout << " ]";
}

int main()
{
    std::vector test_1{'A', 'B', 'C', 'a', 'b', 'c', 'd'};
    display(test_1);

    std::cout << std::endl;
    std::cout << "\n============ 1 ===============" << std::endl;

    {
        std::vector<int> nums{100, 200, 300, 400, 500};
        auto it = nums.begin();

        std::cout << "\nstd::cout << *it << std::endl;" << std::endl;
        std::cout << *it << std::endl;

        std::cout << "\nstd::cout << *it << std::endl -> ";
        std::cout << *it << std::endl;

        it++;
        std::cout << "\nit++; -> ";
        std::cout << *it << std::endl;

        it += 2;
        std::cout << "\nit +=2 -> ";
        std::cout << *it << std::endl;

        it -= 2;
        std::cout << "\nit -=2 -> ";
        std::cout << *it << std::endl;

        // it = it.end() - 1; // ERROR
        // std::cout << "\nit = it.end() -1;" << std::endl;
        // std::cout << *it << std::endl;
    }

    std::cout << "\n============ 2 updating iterator ===============" << std::endl;
    {
        std::vector<int> nums{111, 222, 333, 444, 555};

        std::vector<int>::iterator it = nums.begin(); // <---- ::iterator

        std::cout << "BEFORE" << std::endl;
        display(nums);

        while (it != nums.end())
        {
            *it = 0;
            it++;
        }
        std::cout << "\nAFTER" << std::endl;
        display(nums);

        std::cout << std::endl;
    }

    std::cout << "\n============ 3 const_iterator ===============" << std::endl;
    {
        std::vector<int> nums{111, 222, 333, 444, 555};

        std::vector<int>::const_iterator it = nums.cbegin(); // <---- ::CONST_iterator

        while (it != nums.cend())
        {
            // *it = 0; // we canr changing value via CONST_iterator
            std::cout << *it << " ";
            it++;
        }

        std::cout << std::endl;
    }

    std::cout << "\n============ 4 reverse_iterator ===============" << std::endl;
    {
        std::vector<int> nums{1, 2, 3, 4, 5};
        std::vector<int>::reverse_iterator it = nums.rbegin(); // <---- ::reverse_iterator
        while (it != nums.rend())
        {
            std::cout << *it << " ";
            it++;
        }

        std::cout << "\n=== Const reverse iterator over a LIST ===" << std::endl;
        {
            std::list<std::string> name{"Garry", "Joe", "Sam", "Jack"};
            auto it = name.crbegin();      // iterator over list of strings point to "Jack"
            std::cout << *it << std::endl; // Jack
            it++;
            it++;
            // it += 2;// Compiler ERROR
            std::cout << *it << std::endl; // Joe
            it--;
            std::cout << *it << std::endl; // Sam
        }

        std::cout << "\n=== iterator over a MAP ===" << std::endl;
        {
            std::map<std::string, std::string> favorite{
                {"Frank", "C++"},
                {"Bob", "Java"},
                {"Joe", "Haskell"},
            };

            auto it = favorite.begin();
            while (it != favorite.end())
            {
                std::cout << it->first << " : " << it->second << "; " << std::endl;
                it++;
            }
        }

        std::cout << std::endl;
    }

    std::cout << "\n=== 5 Itrator over a subset of a container ===" << std::endl;
    {

        std::vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        std::vector<int>::iterator it_start = nums.begin() + 2; // skip first 2 items
        std::vector<int>::iterator it_end = nums.end() - 3;     // skip last 3 items

        std::cout << "[ ";
        while (it_start != it_end)
        {
            std::cout << *it_start << " ";
            it_start++;
        }
        std::cout << " ]";

        std::cout << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
