// D3 26.08 Pytymko V.L.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Задача 1: Дан текстовый файл. Необходимо создать новый файл,
//  в который переписать из исходного файла все слова, состоящие не менее чем из семи букв.
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
    setlocale(LC_ALL, "");
    std::ifstream input_file("1.txt");
    std::ofstream output_file("2.txt");
  

    int lim = 13;

    if (!input_file.is_open() || !output_file.is_open()) {
        std::cerr << "Не удается открыть файлы." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(input_file, line)) 
    {
        std::istringstream iss(line);
        std::string word;
        while (iss >> word)
        {

            if (word.size() >= lim) 
            {
                output_file << word << " ";
            }
        }
        output_file << "\n";
    }

   
    input_file.close();
    output_file.close();

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
