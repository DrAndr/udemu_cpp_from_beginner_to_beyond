/**
 * Section 19
 * Subject: I/O And Streams
 * Lesson 225 [ Reading from a txt file 1 ]
 *
 * Expected result:
            Hello
            100
            100.500
 */

#include <iostream>
#include <fstream>
// #include <ofstream>

int main()
{
    std::ifstream in_file;
    std::string line;
    int num;
    double total;

    in_file.open("test.txt");
    if (!in_file)
    {
        // std::cerr << "Have no file test.txt, it will be created." << std::endl;

        std::ofstream newFile("test.txt"); // create file
        newFile << "Hello 100 100.500";    // Write to the file
        newFile.close();                   // close file

        in_file.open("test.txt"); // open file for reading
    }
    if (!in_file)
    {
        std::cerr << "Can't open and cteate file 'test.txt'" << std::endl;
        return 1;
    }
    // get data from file, devided by spacer
    in_file >> line >> num >> total;
    std::cout.precision(3);
    std::cout << std::fixed;
    std::cout << line << std::endl;
    std::cout << num << std::endl;
    std::cout << total << std::endl;
    in_file.close();
    return 0;
}
