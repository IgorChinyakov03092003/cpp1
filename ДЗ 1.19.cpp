#include <iostream>
using namespace std;
void mult(int n, double b) { // подзадача 19.1
    int mult = 1;
    while (n > 0) {
        mult *= (n % 10);
        n = n / 10; // получение произведения цифр числа
    }
    if (mult > b) {
        std::cout << "More than b\n";
    }
    else {
        std::cout << "No more than b\n";
    }
}
void sum(int n) { // подзадача 19.2
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10; // подсчет суммы цифр числа
    }
    if (sum % 7 == 0) {
        std::cout << "Sum is a multiple of 7\n";
    }
    else {
        std::cout << "Sum isn't a multiple of 7\n";
    }
}
int main()
{
    int k;
    std::cout << "Enter the number:\n";
    std::cin >> k;  // ввод числа
    if ((k < 100) || (k > 999)) { // программа работает только с положительными трехзначными, можно при необходимости реализовать работу с отрицательными трехзначными, приводя их к своему модулю
        std::cout << "Error!"; // проверка корректности
    }
    else {
        int b;
        std::cout << "Enter b:\n";
        std::cin >> b;  // ввод b
        mult(k, b); // подзадача 19.1
        sum(k); // подзадача 19.2
    }
}


