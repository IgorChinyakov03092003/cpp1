#include <iostream>
using namespace std;
void sum(int a) {
    if (((a >= 1000) && (a <= 9999)) || ((a >= -9999) && (a <= -1000))) { //работаем только с 4-значными числами
        if (a < 0) {
            a = -a; //работаем с модулем числа
        }
        int sum = 0; //сумма цифр
        while (a > 0) {
            sum += a % 10;
            a = a / 10;
        } //подсчет суммы цифр через остатки от деления на 10
        std::cout << "Sum is equal to " << sum << std::endl;
    }
    else {
        std::cout << "Error!"; //если не 4-значное
    }
}
int main()
{
    int a;
    std::cout << "Enter the number!\n";
    std::cin >> a;
    sum(a);
    return 0;
}



