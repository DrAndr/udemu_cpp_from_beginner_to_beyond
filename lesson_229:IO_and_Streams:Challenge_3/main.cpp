/**
 * Section 19
 * Subject: I/O And Streams
 * Lesson 229 [ Section 19 Challenge 3 ]
 *
 * Expected result:
        Enter the substring to search for: Romeo
        25919 words were searched...
        The substring Romeo was found 132 times 
 */

#include <iostream>
#include <fstream>
#include <string>

bool is_matched(const std::string &needle, const std::string &word)
{
    return word.find(needle) != std::string::npos ? true : false;
}

int main()
{
    std::ifstream file("source.txt");
    std::string needle{};
    std::string word{};
    int total{};
    int matched{};

    if (!file.is_open())
    {
        std::cerr << "Cant open source file." << std::endl;
        return 1;
    }
    std::cout << "Enter the substring to search for: ";
    std::cin >> needle;

    while (file >> word)
    {
        total++;
        if (is_matched(needle, word))
            matched++;
    }
    file.close();

    std::cout << "\033[0;33m" << total << " words were searched..." << "\033[0;37m" << std::endl;
    std::cout << "The substring " << needle << " was found " << matched << " times " << std::endl;

    std::cout << std::endl;
    return 0;
}
