#include <iostream>
#include <iomanip>
#include <math.h> //для синуса и косинуса
#define PI 3.141592653589793 //число ПИ
using namespace std;
double cosinus(double q) {
    double cosinus = cos(q);
    if (abs(cosinus) < 1e-10) {
        return 0;
    }
    else {
        return cosinus;
    }
}
double sinus(double q) {
    double sinus = sin(q);
    if (abs(sinus) < 1e-10) {
        return 0;
    }
    else {
        return sinus;
    }
}
//значения синуса и косинуса вычисляются по усовершенствованным функциям, которые вычисляют корректные целочисленные значения при углах 90, 180 и кратных им, зануляя косинус или синус при необходимости
//использование этих функций обусловлено приближенным значением числа ПИ
void PolToDec(double R, double Phi) {
    if (R < 0) {
        std::cout << "Error!"; //радиус всегда неотрицателен
    }
    else if (R == 0) {
        std::cout << "x=0 and y=0"; //случай начала координат
    }
    else {
        double x = R * cosinus(Phi * PI / 180); //угол переводим в радианы
        std::cout << "x = " << x << std::endl;
        double y = R * sinus(Phi * PI / 180); //угол переводим в радианы
        std::cout << "y = " << y << std::endl;
    }
}
int main()
{
    double R;
    std::cout << "Enter the radius:\n";
    std::cin >> R;
    double Phi;
    std::cout << "Enter the angle in degrees:\n";
    std::cin >> Phi;
    PolToDec(R, Phi);
    return 0;
}

