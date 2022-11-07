#include <iostream>
#include <stdlib.h>
using namespace std;
void polygons(double a, double b, double c, double d) {
    if (c == d) {
        if (max(a, b) <= c){
            std::cout << "Possible!";
        }
        else {
            std::cout << "Impossible!";
        }
    }
    else {
        if (max(a, b) <= min(c, d)) {
            std::cout << "Possible!";
        }
        else {
            if ((max(a, b) <= max(c, d)) && (min(a, b) <= min(c, d))) {
                std::cout << "Possible!";
            }
            else {
                std::cout << "Impossible!";
            }
        }
    }
    // минимаксный алгоритм сравнивает между собой a,b,c,d и выдает Possible, если возможно, а иначе Impossible
}
int main()
{
    double a, b, c, d;
    std::cout << "Enter a:\n";
    std::cin >> a;
    std::cout << "Enter b:\n";
    std::cin >> b;
    std::cout << "Enter c:\n";
    std::cin >> c;
    std::cout << "Enter d:\n";
    std::cin >> d; // ввод сторон прямоугольников
    if ((a <= 0) || (b <= 0) || (c <= 0) || (d <= 0)) {
        std::cout << "Error!"; // обработка недопустимых значений
    }
    else {
        polygons(a, b, c, d);
    }
    return 0;
}
