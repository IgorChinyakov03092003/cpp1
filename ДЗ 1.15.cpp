#include <iostream>
using namespace std;
void calendar(int month) { // функция календаря
    if ((month < 1) || (month > 12)) { // обработка ошибки несуществующего месяца
        std::cout << "Error!\n";
    }
    else {
        switch (month) { // непосредственный перебор месяцев
        case 1:
            std::cout << "January, winter\n"; break;
        case 2:
            std::cout << "February, winter\n"; break;
        case 3:
            std::cout << "March, spring\n"; break;
        case 4:
            std::cout << "April, spring\n"; break;
        case 5:
            std::cout << "May, spring\n"; break;
        case 6:
            std::cout << "June, summer\n"; break;
        case 7:
            std::cout << "July, summer\n"; break;
        case 8:
            std::cout << "August, summer\n"; break;
        case 9:
            std::cout << "September, autumn\n"; break;
        case 10:
            std::cout << "October, autumn\n"; break;
        case 11:
            std::cout << "November, autumn\n"; break;
        case 12:
            std::cout << "December, winter\n"; break;
        }
    }
}
int main()
{
    int month;
    std::cout << "Enter month:\n";
    std::cin >> month; // ввод месяца
    calendar(month); // результат
    std::cout << "\n";
    for (int i = -1; i <= 14; i++) { // проверим правильность работы функции для всех месяцев, включая недопустимые значения
        std::cout << i << " ";
        calendar(i);
    }
    return 0;
}

