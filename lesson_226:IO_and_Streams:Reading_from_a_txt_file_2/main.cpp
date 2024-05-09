/**
 * Section 19
 * Subject: I/O And Streams
 * Lesson 226 [ Reading from a txt file 2 ]
 *
 * Expected result:

            ======== Get line as string; ========

            Shall I compare thee to a summer's day?
            Thou art more lovely and more temperate:
            Rough winds do shake the darling buds of May,
            And summer's lease hath all too short a date:
            ...

            ======== Get line by characters; ========

            Shall I compare thee to a summer's day?
            Thou art more lovely and more temperate:
            Rough winds do shake the darling buds of May,
            And summer's lease hath all too short a date:
            ...
 */

#include <iostream>
#include <fstream>

int main()
{

    std::ifstream in_file;

    std::cout << "\n======== Get line as string; ========" << std::endl
              << std::endl;
    {
        in_file.open("poem.txt");
        if (!in_file)
        {
            std::cerr << "Problem opening file" << std::endl;
            return 1;
        }
        std::string line{};
        while (std::getline(in_file, line))
        {
            std::cout << line << std::endl;
        }

        in_file.close();
    }
    std::cout << "\n======== Get line by characters; ========" << std::endl
              << std::endl;
    {
        in_file.open("poem.txt");
        if (!in_file)
        {
            std::cerr << "Problem opening file" << std::endl;
            return 1;
        }
        char c{};
        while (in_file.get(c))
        {
            std::cout << c;
        }
        std::cout << std::endl;
        in_file.close();
    }

    return 0;
}
