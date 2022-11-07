#include <iostream>
#include <stdlib.h> // для rand() и srand()
#include <time.h> // для вызова time()
using namespace std;
void Game() { // функция игры
    int a, b, prod;
    srand(time(0)); // это чтобы каждый раз генерировались разные числа
    a = rand() % 9 + 1;
    b = rand() % 9 + 1; // генерация двух случайных чисел от 1 до 9
    std::cout << "Generated numbers: " << a << " " << b << std::endl;
    std::cout << "Enter prod:\n"; // ввод произведения
    std::cin >> prod;
    if (prod == a * b) {
        std::cout << "True!"; // верный ответ
    }
    else {
        std::cout << "False!"; // Ошибка!
    }
}
int main()
{
    Game(); // запуск игры
}


