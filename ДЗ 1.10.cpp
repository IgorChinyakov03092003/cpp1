#include <iostream>
using namespace std;
void isosceles(double a, double b, double c) {
    if ((a <= 0) || (b <= 0) || (c <= 0)) {
        std::cout << "Error!"; //проверка сторон на отрицательность
    }
    else {
        if ((a + b <= c) || (b + c <= a) || (a + c <= b)) {
            std::cout << "Triangle doesn't exist!"; //проверка треугольника на существование
        }
        else {
            if ((a == b) || (b == c) || (a == c)) {
                std::cout << "True!"; //Равнобедренный
            }
            else {
                std::cout << "False!"; //Неравнобедренный
            }
        }
    }
}
int main()
{
    double a, b, c;
    std::cout << "Enter a:\n";
    std::cin >> a;
    std::cout << "Enter b:\n";
    std::cin >> b;
    std::cout << "Enter c:\n";
    std::cin >> c;
    isosceles(a, b, c);
}


