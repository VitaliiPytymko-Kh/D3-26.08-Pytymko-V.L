//������ 2: ��� ��������� ����. ���������� ���������� ��� ������ � ������ ����.
//  ������� ����� �� ������ ����� ������ ��������� � �������� ����� � �������� �����.

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
        std::cerr << "�� ������� ������� �����." << std::endl;
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


    std::cout << "��������� ���������. ��������� ������� � 3.txt." << std::endl;
    input_file.close();
    output_file1.close();

    return 0;
}*/