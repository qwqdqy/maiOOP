#include "pure_num.h"
bool isPureNum(long long num)
{
    if(num<0) num = -num;
    int prevDigit = 10;
    while(num>0)
    {
        int currentDigit = num % 10;
        if(currentDigit > prevDigit)
        {
            return false;
        }
        prevDigit = currentDigit;
        num /= 10;
    }
    return true;
}
