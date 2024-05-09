/**
 * Section 19
 * Exercise 46
 * Subject: Polimorphism
 *
 * Problem title: [ Reading a text file ]
 *
 * Condition: in the file READMY.md
 *
 * Expected result:

 */

#include <iostream>
#include <fstream>

void read_file(std::string file_name)
{
    //---- YOU WRITE YOUR CODE BELOW THIS LINE----
    std::ifstream fread;
    fread.open(file_name);
    if (!fread.is_open())
    {
        std::cerr << "Error opening file" << std::endl;
    }
    else
    {
        std::string word{};
        while (fread >> word)
        {
            std::cout << word << std::endl;
        }
    }
    //---- YOU WRITE YOUR CODE ABOVE THIS LINE----
}

int main()
{
    read_file("test.txt");
    return 0;
}
