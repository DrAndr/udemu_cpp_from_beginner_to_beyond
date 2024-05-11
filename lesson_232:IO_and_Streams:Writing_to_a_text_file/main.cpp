/**
 * Section 19
 * Subject: I/O And Streams
 * Lesson 229 [ Writing to a text file ]
 *
 * Expected result:
        1 write user content to the output.txt
        2 copy poem.txt to the poem_out.txt
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // simple file creating
    {
        // std::ios::app - prewent owerwriting file and add new contednt to the end
        // It don't work without explicitly  std::
        ofstream out_file{"output.txt", std::ios::app}; // create or just open file

        if (!out_file)
        {
            cerr << "Error creating file." << endl;
            return 1;
        }

        string line;
        cout << "Add to file: ";
        getline(cin, line); // get user string

        out_file << line << endl; // write(owerwrite by default) to file

        out_file.close(); // close file
    }

    // coping file to file
    {
        std::ifstream in_file{"poem.txt"};
        std::ofstream out_file{"poem_out.txt"};
        if (!in_file)
        {
            std::cerr << "Error opening input file" << std::endl;
            return 1;
        }
        if (!out_file)
        {
            std::cerr << "Error opening output file" << std::endl;
            return 1;
        }

        // copy by characters
        char c;
        while (in_file.get(c))
            out_file.put(c);
        /* // copy by line
                std::string line{};
                while (std::getline(in_file, line))
                    out_file << line << std::endl;
        */

        std::cout << "File copied" << std::endl;
        in_file.close();
        out_file.close();
    }

    cout << endl;
    return 0;
}
