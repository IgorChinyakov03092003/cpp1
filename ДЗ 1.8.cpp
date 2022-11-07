#include <iostream>
#include <math.h>
using namespace std;
double mediana(double x, double y, double z) {
    return 0.5 * sqrt(2 * x * x + 2 * y * y - z * z);
}
void medians(double a, double b, double c) {
    if ((a <= 0) || (b <= 0) || (c <= 0)) {
        std::cout << "Length error!"; //обработка ошибки неположительной стороны
    }
    else {
        if ((a + b <= c) || (b + c <= a) || (a + c <= b)) {
            std::cout << "Triangle doesn't exist!"; //такого треугольника не существует
        }
        else {
            double ma, mb, mc;
            ma = mediana(b, c, a);
            mb = mediana(a, c, b);
            mc = mediana(a, b, c);
            //при допустимых a,b,c длины медиан всегда положительны
            if ((ma + mb <= mc) || (mb + mc <= ma) || (ma + mc <= mb)) {
                std::cout << "Median triange doesn't exist!"; //из медиан невозможно собрать треугольник
            }
            else { //собираем из медиан треугольник и считаем его медианы через формулу
                double mma, mmb, mmc;
                mma = mediana(mb, mc, ma);
                mmb = mediana(ma, mc, mb);
                mmc = mediana(ma, mb, mc);
                std::cout << "Median 1 is equal to " << mma << std::endl;
                std::cout << "Median 2 is equal to " << mmb << std::endl;
                std::cout << "Median 3 is equal to " << mmc << std::endl;
            }
        }
    }
}
int main()
{
    double a, b, c;
    std::cout << "Enter a:\n";
    std::cin >> a;
    std::cout << "Enter b:\n";
    std::cin >> b;
    std::cout << "Enter c:\n";
    std::cin >> c;
    medians(a, b, c);
}

