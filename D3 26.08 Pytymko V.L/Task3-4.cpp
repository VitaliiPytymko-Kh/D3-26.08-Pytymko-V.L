//Задача 3: Создать и инициализировать массив из 4-х объектов типа Дробь (Fraction) и записать этот массив в файл в бинарном режиме.
//Затем создать другой массив из 4 - х объектов типа Дробь и считать в этот массив объекты из этого файла.
//Задача 4: Создать и инициализировать массив из 4-х объектов типа Дробь (Fraction) и записать этот массив в файл в бинарном режиме.
//Затем создать объект типа Дробь и считать из этого файла в этот объект данные предпоследнего объекта массива.Использовать позиционирование по файлу

/*
#include <iostream>
#include <fstream>
using namespace std;

template <typename T>
class Drib {
private:
    T numerator;
    T denominator;

    T nsd(T a, T b) {
        if (b == 0)
            return a;
        return nsd(b, a % b);
    }

public:
    Drib(T num, T den) : numerator(num), denominator(den) {}

    Drib(T num = 0) : numerator(num), denominator(1) {}

    void setNumerator(T num) {
        numerator = num;
    }

    void setDenominator(T den) {
        denominator = den;
    }

    void inputDrib() {
        cout << "Enter numerator: ";
        cin >> numerator;
        cout << "Enter denominator: ";
        cin >> denominator;
    }

    T getNumerator() const {
        return numerator;
    }

    T getDenominator() const {
        return denominator;
    }

    void reduce() {
        T commonDivisor = nsd(numerator, denominator);
        numerator /= commonDivisor;
        denominator /= commonDivisor;
    }

    Drib<T> operator+(const Drib<T>& other) const {
        T num = numerator * other.denominator + other.numerator * denominator;
        T den = denominator * other.denominator;
        Drib<T> result(num, den);
        result.reduce();
        return result;
    }

    Drib<T> operator-(const Drib<T>& other) const {
        T num = numerator * other.denominator - other.numerator * denominator;
        T den = denominator * other.denominator;
        Drib<T> result(num, den);
        result.reduce();
        return result;
    }

    Drib<T> operator*(const Drib<T>& other) const {
        T num = numerator * other.numerator;
        T den = denominator * other.denominator;
        Drib<T> result(num, den);
        result.reduce();
        return result;
    }

    Drib<T> operator/(const Drib<T>& other) const {
        T num = numerator * other.denominator;
        T den = denominator * other.numerator;
        Drib<T> result(num, den);
        result.reduce();
        return result;
    }

    void choiceDrib() {
        cout << "Fraction by default = 0/1" << endl;
        cout << "Do you want to change the fraction? (1 - yes, 0 - no) ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            cout << "Change numerator? (1 - yes, 0 - no) ";
            cin >> choice;

            if (choice == 1) {
                cout << "Enter new numerator: ";
                T newNumerator;
                cin >> newNumerator;
                setNumerator(newNumerator);
            }

            cout << "Change denominator? (1 - yes, 0 - no) ";
            cin >> choice;

            if (choice == 1) {
                cout << "Enter new denominator: ";
                T newDenominator;
                cin >> newDenominator;
                setDenominator(newDenominator);
            }

            cout << "Fraction changed: ";
            printDrib();
        }
        else {
            cout << "Fraction remains unchanged: ";
            printDrib();
        }
    }

    void printDrib() const {
        T wholePart = numerator / denominator;
        T remainder = numerator % denominator;
        if (wholePart != 0) {
            cout << wholePart;
            if (remainder != 0) {
                cout << " " << abs(remainder) << "/" << denominator;
            }
        }
        else {
            cout << numerator << "/" << denominator;
        }
        cout << endl;
    }
};

int main() {
    
    Drib<int> fractions[4] = {
        Drib<int>(1, 2),   
        Drib<int>(3, 4),   
        Drib<int>(2, 3),   
        Drib<int>(4, 5)    
    };
    
    for (int i = 0; i < 4; ++i) {
        cout << "Fraction " << (i + 1) << ": ";
        fractions[i].printDrib();
    }

    ofstream outFile("fractions.dat", ios::binary);

    if (!outFile) {
        cerr << "Error open file to write." << endl;
        return 1;
    }
        
    outFile.write(reinterpret_cast<char*>(&fractions), sizeof(fractions));

    
    outFile.close();

    cout << "Save in file fractions.dat binary." << endl;

    ifstream inFile("fractions.dat", ios::binary);
    if (!inFile) {
        cerr << "Error open file to read." << endl;
        return 1;
    }

    Drib<int> readFractions[4];
    inFile.read(reinterpret_cast<char*>(&readFractions), sizeof(readFractions));
    inFile.close();

    for (int i = 0; i < 4; i++) {

        cout << "Read Fraction "<<(i+1)<<": ";
        readFractions[i].printDrib();
    }


    ifstream infile("fractions.dat", ios::binary);
    if (!inFile) {
        cerr << "Error open file to read." << endl;
        return 1;
    }
    int pos = sizeof(Drib<int>) * 2;
    infile.seekg(pos, ios::beg);
    Drib<int> readFraction;
    infile.read(reinterpret_cast<char*>(&readFraction), sizeof(readFraction));
    infile.close();

    cout << "Read Fraction -1 of size : ";
    readFraction.printDrib();

       
    return 0;


}*/