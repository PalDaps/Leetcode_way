#include <iostream>
#include <vector>

/*

11.07.2025
10:14

Задача : Массив со строками "++X", "X++", и декрементами. Нужно вернуть, что будет с числом, если к нему применять эти операции.
Изначально число 0.

Идея: Просто бежать по массиву.

*/

class Solution
{
public:
    int finalValueAfterOperations(std::vector<std::string>& operations)
    {
        int Result = 0;
        for (size_t i = 0; i < operations.size(); i++)
        {
            std::string Elem = operations[i];
            if (Elem == "++X" || Elem == "X++") Result += 1;
            else Result -= 1;
        }
        return Result;
    }
};

