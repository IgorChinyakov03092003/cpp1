#include <iostream>
#include <math.h> //для арктангенса со знаком и квадратного корня
#define PI 3.14159265
using namespace std;
void DecToPol(double x, double y) {
    if ((x == 0) && (y == 0)) {
        std::cout << "Radius is 0, angle isn't expected!";
    } //случай начала координат
    else {
        double R = sqrt(x * x + y * y);
        std::cout << "Radius is equal to " << R << std::endl;
        double Phi = atan2(y, x) * 180 / PI; //расчет угла в градусах с учетом знака
        std::cout << "Angle is equal to " << Phi << std::endl;
    }
}
int main()
{
    double x;
    std::cout << "Enter x:\n";
    std::cin >> x;
    double y;
    std::cout << "Enter y:\n";
    std::cin >> y;
    DecToPol(x, y);
    return 0;
}



