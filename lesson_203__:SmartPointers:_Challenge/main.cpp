/**
 * Section 17
 * Subject: Smart Pointers
 * Lesson 203 [ Challenge ]
 *
 * Expected result:
            How many data points do you want to enter: 5
                Enter the 1 number: 10
            Test Constructor (10)
                Enter the 2 number: 20
            Test Constructor (20)
                Enter the 3 number: 30
            Test Constructor (30)
                Enter the 4 number: 40
            Test Constructor (40)
                Enter the 5 number: 50
            Test Constructor (50)

            ========= display() ==========
            => [ 10 ];
            => [ 20 ];
            => [ 30 ];
            => [ 40 ];
            => [ 50 ];
            ==============================

            -= END =-
            Test Destructor (50)
            Test Destructor (40)
            Test Destructor (30)
            Test Destructor (20)
            Test Destructor (10)
 */

#include <iostream>
#include <vector>

using namespace std;

class Test
{
private:
    int data;

public:
    Test() : data{0} { cout << "\033[0;33mTest Constructor (" << data << ")\033[0;37m" << endl; }
    Test(int data) : data{data} { cout << "\033[0;32mTest Constructor (" << data << ")\033[0;37m" << endl; }

    int get_data() { return data; }

    ~Test() { cout << "\033[0;31mTest Destructor (" << data << ")\033[0;37m" << endl; }
};

unique_ptr<vector<shared_ptr<Test>>> make();
void fill(vector<shared_ptr<Test>> &vec, int num);
void display(const vector<shared_ptr<Test>> &vec);

unique_ptr<vector<shared_ptr<Test>>> make()
{
    return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>> &vec, int num)
{
    int input_data;
    for (int i = 0; i < num; i++)
    {
        cout << "\033[4;37m   Enter the " << i + 1 << " number: \033[0;37m";
        cin >> input_data;
        vec.push_back(make_shared<Test>(input_data));
    }
}

void display(const vector<shared_ptr<Test>> &vec)
{
    cout << "\n========= display() ==========" << endl;
    for (shared_ptr<Test> obj : vec)
        cout << " => [ " << obj->get_data() << " ];" << endl;

    cout << "==============================" << endl;
}

int main()
{

    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    // vec_ptr = make_unique<vector<shared_ptr<Test>>>();
    vec_ptr = make(); // Hmm... do we raly need this function...

    cout << "How many data points do you want to enter: ";
    int num;
    cin >> num;

    fill(*vec_ptr, num);
    display(*vec_ptr);

    cout << "\n-= END =-" << endl;
    return 0;
}
