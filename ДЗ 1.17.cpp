#include <iostream>
using namespace std;
void money(int k) { // функция вывода правильной формы
    if (k % 10 == 0) { // реализован перебор случаев формы по остаткам от деления на 10 и отдельно рассмотрены образования формы для случаев 11-19
        std::cout << k << " kopeek" << std::endl;
    }
    else {
        if ((k >= 11) && (k <= 19)) {
            std::cout << k << " kopeek" << std::endl;
        }
        else {
            if (k % 10 == 1) {
                std::cout << k << " kopeika" << std::endl;
            }
            if ((k % 10 >=2) && (k%10 <=4)) {
                std::cout << k << " kopeiki" << std::endl;
            }
            if ((k % 10 >= 5) && (k % 10 <= 9)) {
                std::cout << k << " kopeek" << std::endl;
            }
        }
    }
}
int main()
{
    for (int n = 1; n <= 99; n++) { // вывод всего списка 1-99 для проверки правильности всех форм
        money(n);
    }
    int m;
    std::cout << "Enter the number:\n"; // реализация пользовательского ввода с проверкой допустимых значений
    std::cin >> m;
    if ((m < 1) || (m > 99)) {
        std::cout << "Error!";
    }
    else {
        money(m);
    }
}
