//Задача 2: Дан текстовый файл. Необходимо переписать его строки в другой файл.
//  Порядок строк во втором файле должен совпадать с порядком строк в заданном файле.

/*#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
    setlocale(LC_ALL, "");
    std::ifstream input_file("1.txt");
    std::ofstream output_file1("3.txt");

    if (!input_file.is_open() || !output_file1.is_open())
    {
        std::cerr << "Не удается открыть файлы." << std::endl;
        return 1;
    }
    std::string line1;
    while (std::getline(input_file, line1))
    {
        std::istringstream iss(line1);
        std::string word;
        while (iss >> word)
        {
            output_file1 << word << " ";
        }
        output_file1 << "\n";
    }


    std::cout << "Программа завершена. Результат записан в 3.txt." << std::endl;
    input_file.close();
    output_file1.close();

    return 0;
}*/