/**
 * Section 19
 * Subject: I/O And Streams
 * Lesson 233 [ Section 19 Challenge 4 ]
 *
 * Expected result:
 *          will be create numered romeoandjuliet_num.txt
 */

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main()
{

    std::ifstream source_file{"romeoandjuliet.txt"};

    if (!source_file.is_open())
    {
        std::cerr << "Can't open source file." << std::endl;
        return 1;
    }

    std::ofstream output_file{"romeoandjuliet_num.txt"};
    if (!output_file)
    {
        std::cerr << "Cant create or open file." << std::endl;
        return 1;
    }
    int counter{0};
    std::string source_line;
    while (std::getline(source_file, source_line))
    {
        if (source_line.length() > 0)
            counter++;
        output_file << std::setfill('_');
        output_file << std::setw(5) << std::left << counter << source_line << std::endl;
    }

    source_file.close();
    output_file.close();

    std::cout << "Done!" << std::endl;
    return 0;
}
