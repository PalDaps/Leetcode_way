#include <iostream>
#include <vector>
#include <stack>

/*

16.08.2025
22:39

Задача: Да гистограмма высот, нужно определить максимальную площадь образованную высотами.

Идея: Стэк для хранения индексов всех столбцов наименьшевых левых столбцов относительно текущего.

P.S. 22:39 Сложно.

*/

class Solution
{
public:
    int largestRectangleArea(std::vector<int>& heights)
    {
        // Стэк, куда будем ложить индексы высот по неубыванию
        std::stack<int> OrderedInxHeights;
        int MaxArea = 0;
        heights.push_back(0);

        for (int i = 0; i < heights.size(); i++)
        {
            // Если стэк не пуст и текущая высота меньше высоты в стеке, то вычисляем для нее
            // максимальную площадь
            while (!OrderedInxHeights.empty() && heights[OrderedInxHeights.top()] > heights[i])
            {
                int Top = heights[OrderedInxHeights.top()];
                OrderedInxHeights.pop();
                int Ran = OrderedInxHeights.empty() ? -1 : OrderedInxHeights.top();
                MaxArea = std::max(MaxArea, Top * (i - Ran - 1));
            }
            OrderedInxHeights.push(i);
        }
        return MaxArea;
    }
};