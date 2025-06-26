/*

26.06.2025
22:32

Задача: Даны 2 числа n и m. Нужно сложить все числа, которые не делятся на m и вычесть числа, которые делятся на m в промежутке
от 1 до n включительно.

Идея: Остаток отдельная от m.

*/

class Solution {
public:
    int differenceOfSums(int n, int m)
    {
        int Result = 0;
        for (size_t i = 1; i <= n; i++)
        {
            if (i % m == 0) Result -= i;
            else Result += i;
        }
        return Result;
    }
};