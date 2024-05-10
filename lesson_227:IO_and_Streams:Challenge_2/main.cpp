/**
 * Section 19
 * Subject: I/O And Streams
 * Lesson 227 [ Section 19 Challenge 2 ]
 *
 * Expected result:
        Student name        |    Ansvers   |Score |
        -------------------------------------------
        Frank               |     ABCDE    |  5.0 |
        Larry               |     ABCAC    |  3.0 |
        Moe                 |     BBCDE    |  4.0 |
        Curly               |     BBAAE    |  2.0 |
        Michael             |     BBCDE    |  4.0 |
        -------------------------------------------
        Average score       |              |  3.6 |
 */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int get_student_score(std::string correct_ansvers, std::string student_ansvers)
{
    int result{};
    for (size_t i = 0; i < correct_ansvers.length(); i++)
        if (correct_ansvers[i] == student_ansvers[i])
            ++result;

    return result;
}

template <typename T>
void display_row(const std::string &name, const std::string &ansver, T score)
{
    std::cout << std::setprecision(1) << std::fixed;

    std::string title{"some titile"};
    std::cout << std::setw(20) << std::left << "" + name;
    std::cout << "|" << std::setw((15 - ansver.length()) / 2) << "" << ansver << std::setw((15 - ansver.length()) / 2) << std::right << "|"
              << std::setw(5) << score << " |";
    std::cout << std::endl;
    return;
}

void delimeter_line(int length)
{
    std::cout << std::setfill('-');
    std::cout << std::setw(length) << std::left <<""<< std::endl;
    std::cout << std::setfill(' ');
    return;
}

int main()
{

    double vag_score{};
    int score_sum{};
    int students{};

    std::string correct_ansvers{};
    std::string student_name{};
    std::string student_ansvers{};
    double student_score{};
    std::ifstream in_file;

    in_file.open("responses.txt");
    if (!in_file)
    {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    std::string line{};

    in_file >> correct_ansvers;
    display_row("Student name", "Ansvers", "Score");
    delimeter_line(43); 
    while (in_file >> student_name >> student_ansvers)
    {
        student_score = get_student_score(correct_ansvers, student_ansvers);
        display_row(student_name, student_ansvers, student_score);
        students++;
        score_sum += student_score;
    }

    delimeter_line(43);

    vag_score = static_cast<double>(score_sum) / students;
    display_row("Average score", " ", vag_score);

    in_file.close();

    return 0;
}
