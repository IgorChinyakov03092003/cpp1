#include <iostream>
#include <math.h>
using namespace std;
void Triangle(double a, double b) {
    if ((a > 0) && (b > 0)) {
        double S = 0.5 * (a * b);
        std::cout << "Area is equal to: " << S << std::endl;
        double c = sqrt(a * a + b * b);
        std::cout << "Hypothenuse is equal to: " << c << std::endl;
    }
    else {
        std::cout << "Error!";
    }
}
int main()
{
    double a;
    std::cout << "Enter a:\n";
    std::cin >> a;
    double b;
    std::cout << "Enter b:\n";
    std::cin >> b;
    Triangle(a, b);
    return 0;
}
