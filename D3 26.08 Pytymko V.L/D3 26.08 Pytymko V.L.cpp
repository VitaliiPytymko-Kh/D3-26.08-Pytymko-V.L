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
