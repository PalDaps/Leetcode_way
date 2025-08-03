#include <iostream>
#include <vector>

/*

03.08.2025
21:26

Задача: Дано число n. Нужно понять сколькими способами можно получить n получая его из 1 и 2. 

Идея: Фибоначчи с мемоизацией

P.S. 21:28 Прошлый раз, когда делал эту задачу тильтанул, так как начал решать ее после фиббоначи и не решил.
Не понял, что это фиббоначи просто в другой формулировке. Этот момент меня удивил. Но все-таки глубину рекурсии
все еще не чувствую. Не знаю, в чем проблема, но я высню!)

*/

class Solution 
{
public:
    int Memo(int n, std::vector<int>& Dp)
    {
        if (n <= 2) return n;
        if (Dp[n] != -1) return Dp[n];
        int Left = Memo(n - 1, Dp);
        int Right = Memo(n - 2, Dp);
        Dp[n] = Left + Right;
        return Dp[n];
    }
    int climbStairs(int n)
    {
        std::vector<int> Dp(n + 1, -1);
        return Memo(n, Dp);
    }
};