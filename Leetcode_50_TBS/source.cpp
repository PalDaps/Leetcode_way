 #include <iostream>

/*

09.07.2025
16:59

Задача : На вход подает double число и int число. Нужно возвести double в int. Причем алгоритм должен работать
быстрее, чем n^2.

Идея: Уменьшить n в два раза за счет свойства степеней.

Решение: 

P.S. 17:00 Однако красиво.

Для уменьшения n в два раза используется свойства степеней:
x^n = (x^2)^(n/2), если n чётное
x^n = x * (x^2)^(n/2), если n нечётное
x^(-n) = 1 / (x^n), если n отрицательное

*/

class Solution {
public:
    double myPow(double x, long long int n)
    {
        if (n == 0) return 1;
        if (n < 0)
        {
            return myPow(1 / x, std::abs(n));
        }

        if (n % 2 == 0)
        {
            return myPow(x * x, n / 2);
        }
        return x * myPow(x * x, n / 2);
    }
};

/*

Notes of repeats

// 02.01.2025 - Fail
// 19:14      - Repeat after 5 month
// P.S.       - Task +, Idea +, Solution +, Corner cases +

*/