#include <iostream>
#include <math.h>
using namespace std;
void Quadratic(double a, double b, double c) {
    if (a == 0) {
        std::cout << "Error!"; //тогда это не квадратное уравнение
    }
    else {
        if (b * b - 4 * a * c < 0) {
            std::cout << "No roots!"; //нет корней, дискриминант отрицателен
        }
        if (b * b - 4 * a * c == 0) {
            double x0 = -b / (2 * a);
            std::cout << "Only one root x0 = " << x0 << std::endl; //случай единственного корня
        }
        if (b * b - 4 * a * c > 0) { //случай двух корней
            double d1 = sqrt(b * b - 4 * a * c); //используем формулу корней квадратного уравнения
            double x1 = (-b + d1) / (2 * a);
            std::cout << "The first root x1 = " << x1 << std::endl;
            double x2 = (-b - d1) / (2 * a);
            std::cout << "The second root x2 = " << x2 << std::endl;
        }
    }
}
int main()
{
    double a, b, c; //коэффициенты ax^2+bx+c=0
    std::cout << "Enter a:\n";
    std::cin >> a;
    std::cout << "Enter b:\n";
    std::cin >> b;
    std::cout << "Enter c:\n";
    std::cin >> c;
    Quadratic(a, b, c);
    return 0;
}


