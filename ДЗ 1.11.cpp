#include <iostream>
using namespace std;
void price(double k) {
    if (k <= 0) {
        std::cout << "Error!" << std::endl; //покупка не совершена или цена указана неверно (не может быть отрицательной)
    }
    else {
        if (k <= 1000) {
            std::cout << "Total price is " << k << " roubles"; //нет скидки
        }
        else {
            k = 0.9 * k;
            std::cout << "Total price is " << k << " roubles"; //есть скидка
        }
    }
}
int main()
{
    double k;
    std::cout << "Enter the price:\n";
    std::cin >> k;
    price(k);
    return 0;
}


