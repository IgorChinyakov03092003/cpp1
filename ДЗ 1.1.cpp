#include <iostream>
using namespace std;
void area(double b1, double b2, double h) {
    if ((b1 > 0) && (b2 > 0) && (h > 0)) {
        double S = 0.5 * (b1 + b2) * h;
        std::cout << "Area is equal to " << S << std::endl;
    }
    else {
        std::cout << "Area doesn't exist!" << std::endl;
    }
}
int main()
{
    double b1;
    double b2;
    double h;
    std::cout << "Enter b1:\n";
    std::cin >> b1;
    std::cout << "Enter b2:\n";
    std::cin >> b2;
    std::cout << "Enter h:\n";
    std::cin >> h;
    area(b1, b2, h);
    return 0;
}