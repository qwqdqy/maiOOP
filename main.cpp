#include <iostream>
#include "pure_num.h"
int main()
{
    long long num;
    std::cout << "Введите число: ";
    if(!(std::cin >> num))
    {
        std::cout << "Ошибка ввода\n";
        return 1;
    }
    if (isPureNum(num))
    {
        std::cout << "Число чистое\n";

    }
    else
    {
        std::cout << "Число нечистое\n";
    }
    return 0;
}