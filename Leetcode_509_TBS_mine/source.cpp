#include <iostream>
#include <vector>

/*

07.07.2025
13:19

Задача: Числа фибоначи. F(n) = F(n-1) + F(n-2)

Идея: Рекурсия и формула

P.S. 13:20 Я не понимаю, что я не понимаю в рекурсии. Почему я до конца не чувствую эту рекурсию.
P.S.
20:50
03.08.2025
Все еще не чувствую глубину рекурсии. Но что-то стало даваться мне намного легче, но я не понимаю.
Я не понимаю, почему я не понимаю. :)

*/

class Solution
{
public:
    int fib(int n)
    {
        if (n <= 1) return n;
        int Left = fib(n - 1);
        int Right = fib(n - 2);
        return Left + Right;
    }
};

/*

03.08.2025
21:04

Задача: Числа фибоначи. F(n) = F(n-1) + F(n-2)

Идея: Рекурсия с мемоизаций.

P.S. 21:05 Чет несовсем понятно как это будет работать.

*/

class SolutionMemo
{
public:
    int Memo(int n, std::vector<int>& Dp)
    {
        if (n <= 1) return n;
        if (Dp[n] != -1) return Dp[n];
        int Left = Memo(n - 1, Dp);
        int Right = Memo(n - 2, Dp);
        Dp[n] = Left + Right;
        return Dp[n];
    }
    int fib(int n)
    {
        std::vector<int> Dp(n + 1, -1);
        return Memo(n, Dp);
    }
};


int main()
{
    Solution Daps;
    SolutionMemo DapsMemo;
    
    Daps.fib(4);
    DapsMemo.fib(4);
    return 0;
}