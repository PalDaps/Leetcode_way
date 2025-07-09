#include <iostream>

/*

09.07.2025
16:25

Задача : На вход подает double число и int число. Нужно возвести double в int. Причем алгоритм должен работать
быстрее, чем n^2.

Идея:

Решение: Самый граничный случай когда степень 0, значит возвращаем единичку. Если n > 0. Значит x умножаем
на число с со степенью меньшей на 1. Если n < 0, то умножаем 1/x * на число со степенью меньше на 1.

P.S. 16:44 Все равно не понимаю рекурсию. Ужас.

*/

class Solution 
{
public:
    double myPow(double x, int n)
    {
        if (n == 0) return 1;
        else if (n > 0)
        {
            return x * myPow(x, n - 1);
        }
        double Result = (1 / x)*myPow(x, n+1);
        return Result;
    }
};

int main()
{
    Solution Daps;
    Daps.myPow(2, -2);
    return 0;
}