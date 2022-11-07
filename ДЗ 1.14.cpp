#include <iostream>
#include <math.h>
using namespace std;
void call(int min, int sec, int day, double rate) {
    if ((min < 0) || (sec < 0) || (sec >= 60) || (rate <= 0) || (day < 1) || (day > 7)) {
        std::cout << "Error!"; // обработка недопустимых случаев
    }
    else {
        double time = min + sec / 60.; // точка в конце чтоб не отбросилась дробная часть
        double price = time * rate;
        if (day >= 6) {
            price = 0.8 * price;
        }
        std::cout << "Total price is equal to " << round(price * 100) / 100 << " roubles" << std::endl;
        // округление до двух знаков после точки (т к 1 коп = 0.01 руб)
    }
}
int main()
{
    int min, sec, day; 
    double rate;
    std::cout << "Enter minutes:\n";    // сколько минут длился разговор
    std::cin >> min;
    std::cout << "Enter seconds:\n";    // сколько секунд длился разговор
    std::cin >> sec;
    std::cout << "Enter rate:\n";       // тариф разговора, руб/мин
    std::cin >> rate;
    std::cout << "Enter day:\n";       // день разговора (1-7)
    std::cin >> day;
    call(min, sec, day, rate);
    return 0;
}

