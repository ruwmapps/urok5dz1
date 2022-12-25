#include <fstream>
#include <iostream>
#include <sstream>
#include <windows.h>
#include <algorithm>



class Figura
{
protected:
    int count_storon = 0;
    std::string name_figura = "Фигура";

public:
    Figura() {};

    std::string get_name() {
        return this->name_figura;
    }

    int get_count_storon() {
        return this->count_storon;
    }

};

class Triangle : public Figura
{
public:
    Triangle() {
        this->count_storon = 3;
        this->name_figura = "Треугольник";
    };
};


class Quatro : public Figura
{
public:
    Quatro() {
        this->count_storon = 4;
        this->name_figura = "Квадрат";
    };
};






int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figura figura;
    Triangle triangle;
    Quatro quatro;

    std::cout << "Количество сторон:\n";
    std::cout << figura.get_name() << ":" << figura.get_count_storon() << "\n";
    std::cout << triangle.get_name() << ":" << triangle.get_count_storon() << "\n";
    std::cout << quatro.get_name() << ":" << quatro.get_count_storon() << std::endl;
}