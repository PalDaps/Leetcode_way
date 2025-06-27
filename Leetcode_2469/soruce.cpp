#include <vector>

/*

27.06.2025
21:19

Задача: Дана температура в цельсия, ее нужно перевести в кельвины и фаренгейты.

Идея: Ну как бы да

Идея: Остаток отдельная от m.

*/


class Solution 
{
public:
    std::vector<double> convertTemperature(double celsius)
    {
        std::vector<double> Result(2, 0);
        Result[0] = celsius + 273.15;
        Result[1] = celsius * 1.8 + 32;
        return Result;
    }
};