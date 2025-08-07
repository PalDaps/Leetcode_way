#include <iostream>
#include <vector>

/*

07.08.2025
21:03

Задача: Дано число n и число k <= n. Нужно вернуть массив всех комбинаций размером k, таких что [1, n]. То есть, если n = 4, а k = 2, то
[1,2], [1,3], [1,4], [2,3], [2,4], [3,4]. Повторяться нельзя и такие комбинации не нужно включать [1,1], [2,2]...

Идея: Не знаю как ее коротко описать, приходит на ум только решение.

Решение: Начать с элемента 1. После делегировать в функцию на единичку больше. В итоге сформируется [1,2], если размер комбинации
равен k, то добавляем эту кобминацию в результрующий массив и выкидываемся на топ рекурсивного вызова. Убираем последнюю цифру
и пробуем вставить следущую цифру.

P.S. 21:15 Тяжело сегодня идет. Прям очень. ((((.

*/

class Solution
{
public:
    void BackTracking(int Start, std::vector<int>& Comb,
        std::vector<std::vector<int>>& Result, int n, int k)
    {
        if (Comb.size() == k)
        {
            Result.push_back(Comb);
            return;
        }

        for (int i = Start; i <= n; i++)
        {
            Comb.push_back(i);
            BackTracking(i + 1, Comb, Result, n, k);
            Comb.pop_back();
        }
    }

    std::vector<std::vector<int>> combine(int n, int k)
    {
        std::vector<std::vector<int>> Result;
        std::vector<int> Comb;

        BackTracking(1, Comb, Result, n, k);
        return Result;
    }
};