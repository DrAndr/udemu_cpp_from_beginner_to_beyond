/**
 * Section 17
 * Subject: Smart Pointers
 * Lesson 202 [ Custom Deleters ]
 *
 * Expected result:
            ==== Function Usage. ====
            Test Constructor (100)
            Custom function deleter
            Test Destructor (100)

            ==== Lambda expresion Usage. ====
            Test Constructor (100)
            Lambda expresion deleter
            Test Destructor (100)

            -= END =-
 */

#include <iostream>
#include <vector>

using namespace std;

class Test
{
private:
    int data;

public:
    Test() : data{0} { cout << "Test Constructor (" << data << ")" << endl; }
    Test(int data) : data{data} { cout << "Test Constructor (" << data << ")" << endl; }

    int get_data() { return data; }

    ~Test() { cout << "Test Destructor (" << data << ")" << endl; }
};

void custom_deleter(Test *ptr)
{
    cout << "Custom function deleter" << endl;
    delete ptr;
};

int main()
{

    cout << "\n==== Function Usage. ====" << endl;
    {
        shared_ptr<Test> ptr1{new Test(100), custom_deleter};
    }

    cout << "\n==== Lambda expresion Usage. ====" << endl;
    {
        shared_ptr<Test> ptr2(new Test{100}, [](Test *ptr)
                              {
                cout << "Lambda expresion deleter" << endl;
                delete ptr; });
    }

    cout << "\n-= END =-" << endl;
    return 0;
}
