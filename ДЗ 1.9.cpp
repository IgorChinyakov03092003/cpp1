#include <iostream>
using namespace std;
void timer(int k) {
    if ((k < 1) || (k > 86400)) {
        std::cout << "Error!"; //такой секунды в сутках не существует
    }
    else {
        k -= 1; //столько целых секунд прошло с начала суток до k-ой секунды
        int hours = (k - k % 3600) / 3600; // столько прошло часов, с учетом 1ч = 3600сек
        int ost = (k - hours * 3600); //столько секунд прошло от начала текущего часа
        int minutes = (ost - ost % 60) / 60; // столько прошло минут в неполном часе, с учетом 1мин = 60сек
        int secs = ost % 60; //столько прошло секунд в неполной минуте
        std::cout << "Overall time: " << hours << " hours, " << minutes << " minutes, " << secs << " seconds" << std::endl;
    }
}
int main()
{
    int k;
    std::cout << "Enter k:\n";
    std::cin >> k;
    timer(k);
    return 0;
}


