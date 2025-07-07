#include <iostream>
#include <vector>

/*

07.07.2025
13:19

Задача: Числа фибоначи. F(n) = F(n-1) + F(n-2)

Идея: Рекурсия и формула

P.S. 13:20 Я не понимаю, что я не понимаю в рекурсии. Почему я до конца не чувствую эту рекурсию.

*/

class Solution
{
public:
    int fib(int n)
    {
        if (n <= 1) return n;
        return fib(n - 1) + fib(n - 2);
    }
};