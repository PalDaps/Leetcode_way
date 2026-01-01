#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

/*

01.01.2026
19:01

Задача: Дан вектор скайбоксов, где первый элемент - левая граница, второй элемент - правая граница, третий элемент высота. Таких скайбоксов
может быть много. Но все они отсортированы по non-decreasing order относительно левой границы. Нужно вернуть вектор точек скайбоксов.
Повторять точки нельзя.

Идея: SweepLine с точками, Event-based thinkings на основе высот, Max of active heights при изменение текущей высоты, чтобы сформировать результирующий
вектор.

Решение: 

multiset, потому что:
- нужен max за O(1)
- insert / erase за O(log n)
- возможны одинаковые высоты»

Sweep Line:
1. Для начала нужен массив точек, чтобы идти последовательно по всем границам. 
2. Идем по все building в building и заполняем массив точек.
Event-based thinkings
3. Добавляем в массив точек, высоты так, чтобы можно было определить, где начало, а где конец. Если высота с минусом, то это начало, иначе конец.
4. Сортируем массив точек по координате X.
5. Далее начинаем идти по всему массиву точек и если высота меньше нуля, то добавляем высоту в мультисетт активных высот. Иначе, ищем эту высоту в 
мультисете и удаляем.
Max of active heights
6. Далее смотрим на самую большую высоту. Если, сейчас изменилась высота, то давбляем одномерный вектор с координатами в результирующий вектор.

P.S. 20:01 Сложно.

*/

class Solution {
public:
    std::vector<std::vector<int>> getSkyline(std::vector<std::vector<int>>& Buildings)
    {
        std::vector<std::vector<int>> Result;
        std::vector<std::pair<int, int>> Points;
        std::multiset<int> FallBackHeight{ 0 };

        for (auto Building : Buildings)
        {
            Points.push_back({ Building[0], -Building[2] });
            Points.push_back({ Building[1], Building[2] });
        }

        std::sort(Points.begin(), Points.end());

        int CurrentHeight = 0;

        for (int i = 0; i < Points.size(); i++)
        {
            int CurrX = Points[i].first;
            int CurrY = Points[i].second;

            if (CurrY < 0)
            {
                FallBackHeight.insert(-CurrY);
            }
            else
            {
                auto DeleteY = FallBackHeight.find(CurrY);
                FallBackHeight.erase(DeleteY);
            }

            int MaxY = *FallBackHeight.rbegin();
            if (CurrentHeight != MaxY)
            {
                CurrentHeight = MaxY;
                Result.push_back({ CurrX, CurrentHeight });
            }
        }
        return Result;
    }
};