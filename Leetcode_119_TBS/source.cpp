#include <iostream>
#include <vector>

/*

07.07.2025
12:32

Задача: Треугульник Паскаля, подается входное число это строка в треугльнике. Нужно вернуть эту строку.

Идея: Рекурсия. Сначала поймать все числа. Потом создавать строки с первой, возвращая самую новую. 

Решение: Дошли до 0 вернули 1. Потом делаем {1,1}, возвращаем. Потом делаем {1, 2, 1} и возвращаем. Левую единицу и правую
единицу обрабатываем как граничный случай.

*/

class Solution {
public:
    std::vector<int> getRow(int rowIndex)
    {
        if (rowIndex == 0)
        {
            return { 1 };
        }
        std::vector<int> LastRow = getRow(rowIndex - 1);
        std::vector<int> Current(1, 1);
        for (size_t i = 1; i < LastRow.size(); i++)
        {
            Current.push_back(LastRow[i - 1] + LastRow[i]);
        }
        Current.push_back(1);
        return Current;
    }
};