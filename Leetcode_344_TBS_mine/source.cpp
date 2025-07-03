#include <iostream>
#include <vector>

/*

03.07.2025
14:18

Задача: Есть массив char-ов, нужно его перевернуть.

Идея: Два указателя. Последний меняем с первым, левый указатель увеличиваем, правый уменьшаем. 
Найти когда нужно выйти из рекурсии.

P.S. Решил с первого раза за минут 5, да еще и рекурсией. Если честно это была моя первая задача на рекурсию.

*/

class Solution
{
public:
    void Recursion(std::vector<char>& s, size_t Left, size_t Right)
    {
        if (Left >= Right) return;
        char Temp = s[Left];
        s[Left] = s[Right];
        s[Right] = Temp;
        Left++;
        Right--;
        Recursion(s, Left, Right);
    }
    void reverseString(std::vector<char>& s)
    {
        Recursion(s, 0, s.size() - 1);
    }
};
