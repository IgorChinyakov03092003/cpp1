#include <iostream>
#include <math.h>
using namespace std;
void pal(int n) {
    int n1 = 0;
    int a = n;
    for (int i = 3; i >= 0; i--) {
        n1 += (n % 10) * pow(10, i);
        n = n / 10;
    } // вывод обратного числа
    if (n1 == a) { // сравнение исходного и обратного чисел
        std::cout << "True!";
    }
    else {
        std::cout << "False!";
    }
}
int main()
{
    int m;
    std::cout << "Enter m:\n";
    std::cin >> m; // ввод числа
    if ((m < 1000) || (m > 9999)) {
        std::cout << "Error!"; // проверка корректности
    }
    else {
        pal(m); // вывод результата
    }
}
