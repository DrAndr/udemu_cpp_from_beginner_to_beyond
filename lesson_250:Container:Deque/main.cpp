/**
 * Section 20
 * Subject: Standard Template Library [ STL ]
 * Lesson 249 [ Containers : Deque ]
 *
 * Expected result:
                        
            Test1 =========================
            [1 2 3 4 5 ]
            [2 4 5 6 ]
            [100 100 100 100 100 100 100 100 100 100 ]
            [100 200 5 6 ]

            Test2 =========================
            [0 0 0 ]
            [0 0 0 10 20 ]
            [200 100 0 0 0 10 20 ]
            Front: 200
            Back : 20
            Size  : 7
            [100 0 0 0 10 ]

            Test3 =========================
            [9 7 5 3 1 2 4 6 8 10 ]

            Test4 =========================
            [10 9 8 7 6 5 4 3 2 1 ]
            [1 2 3 4 5 6 7 8 9 10 ]

            Test5 =========================
            [10 9 8 7 6 5 4 3 2 1 ]
            [1 2 3 4 5 6 7 8 9 10 ]
 */
#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

// template function to display any deque
template <typename T>
void display(const std::deque<T> &d) {
    std::cout << "[";
    for (const auto &elem: d)
        std::cout << elem << " ";
    std::cout <<  "]"<< std::endl;
}

void test1() {
    std::cout << "\nTest1 =========================" << std::endl;

    std::deque<int> d {1,2,3,4,5};
    display(d);
    
    d = {2,4,5,6};
    display(d);
    
    std::deque<int> d1 (10, 100);    // ten 100s in the deque
    display(d1);
    
    d[0]  = 100;
    d.at(1) = 200;
    display(d);
}

void test2() {
    // push and pops
    std::cout << "\nTest2 =========================" << std::endl;

    std::deque<int> d {0,0,0};
    display(d);
    
    d.push_back(10);
    d.push_back(20);
    display(d);
    
    d.push_front(100);
    d.push_front(200);
    display(d);
    
    std::cout << "Front: " << d.front() << std::endl;
    std::cout << "Back : " << d.back() << std::endl;
    std::cout << "Size  : " << d.size() << std::endl;
    
    d.pop_back();
    d.pop_front();
    display(d);
}

void test3() {
    // insert all even numbers into the back of a deque and all 
    // odd numbers into the front
    std::cout << "\nTest3 =========================" << std::endl;
    
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> d;
    
    for (const auto &elem: vec) {
        if (elem % 2 == 0)
            d.push_back(elem);
        else
            d.push_front(elem);
    }
    display(d);
}

void test4() {
    // push front vs. back ordering
    std::cout << "\nTest4 =========================" << std::endl;

    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> d;
    
    for (const auto &elem: vec) {
        d.push_front(elem);
    }    
    display(d);
    
    d.clear();
    
     for (const auto &elem: vec) {
        d.push_back(elem);
    }
    display(d);
}

void test5() {
    // Same as test4 using std::copy
    std::cout << "\nTest5 =========================" << std::endl;

    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> d;
    
    std::copy(vec.begin(), vec.end(), std::front_inserter(d));
    display(d);
    
    d.clear();
    
    std::copy(vec.begin(), vec.end(), std::back_inserter(d));
    display(d);
}

int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    return 0;
}

