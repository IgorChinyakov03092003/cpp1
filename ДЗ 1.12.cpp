#include <iostream>
using namespace std;
void recomend(double h, double w) {
    if ((h <= 0) || (w <= 0) || (h - 100 <= 0)) {
        std::cout << "Error!"; //не имеет смысла
    }
    else {
        double ideal = h - 100; //идеальный вес
        if (w > ideal) {
            std::cout << "You need to lose " << w - ideal << " kg"; //скинуть вес
        }
        if (w < ideal) {
            std::cout << "You need to gain " << ideal - w << " kg"; //набрать вес
        }
        if (w == ideal) {
            std::cout << "Your weight is perfect!"; //идеальный вес
        }
    }
}
int main()
{
    double h, w;
    std::cout << "Enter height!\n";
    std::cin >> h;
    std::cout << "Enter weight!\n";
    std::cin >> w;
    recomend(h, w);
}

