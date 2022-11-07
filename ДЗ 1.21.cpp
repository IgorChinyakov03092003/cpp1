// Результат, полученный на моем компьютере
// bool:     1 bytes
// char:     1 bytes
// wchar_t : 2 bytes
// char16_t : 2 bytes
// char32_t : 4 bytes
// short : 2 bytes
// int : 4 bytes
// long : 4 bytes
// long long : 8 bytes
// float : 4 bytes
// double : 8 bytes
// long double : 8 bytes

// Результат онлайн-компилятора
// bool:        1 bytes
// char :       1 bytes
// wchar_t :    4 bytes
// char16_t :   2 bytes
// char32_t :   4 bytes
// short :      2 bytes
// int :        4 bytes
// long :       8 bytes
// long long :  8 bytes
// float :      4 bytes
// double :     8 bytes
// long double : 16 bytes

// Минимальные гарантированные C++ размеры основных типов данных
// bool:        1 bytes
// char :       1 bytes
// wchar_t :    1 bytes
// char16_t :   2 bytes
// char32_t :   4 bytes
// short :      2 bytes
// int :        2 bytes
// long :       4 bytes
// long long :  8 bytes
// float :      4 bytes
// double :     8 bytes
// long double : 8 bytes

#include <iostream>
using namespace std;
void maintypeslist() {
    std::cout << "bool:\t\t" << sizeof(bool) << " bytes" << std::endl;
    std::cout << "char:\t\t" << sizeof(char) << " bytes" << std::endl;
    std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << std::endl;
    std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << std::endl;
    std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << std::endl;
    std::cout << "short:\t\t" << sizeof(short) << " bytes" << std::endl;
    std::cout << "int:\t\t" << sizeof(int) << " bytes" << std::endl;
    std::cout << "long:\t\t" << sizeof(long) << " bytes" << std::endl;
    std::cout << "long long:\t" << sizeof(long long) << " bytes" << std::endl;
    std::cout << "float:\t\t" << sizeof(float) << " bytes" << std::endl;
    std::cout << "double:\t\t" << sizeof(double) << " bytes" << std::endl;
    std::cout << "long double:\t" << sizeof(long double) << " bytes" << std::endl;
}
int main()
{
    maintypeslist();
    return 0;
}
// Выводы:
// Размер основных типов данных непостоянен и зависит от архитектуры процессора или используемого компилятора
// Наибольшие различия наблюдаются в типах wchar_t (1,2,4 bytes), int (2,4 bytes), long (4,8 bytes), long double (8,16 bytes)
// Однако всегда любой тип данных имеет размер, не меньший минимально возможного размера для данного типа, гарантированного C++


