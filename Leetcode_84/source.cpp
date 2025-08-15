#include <iostream>
#include <vector>

/*

14.08.2025
17:46

������: �� ����������� �����, ����� ���������� ������������ ������� ������������ ��������.

����: � �����, ��� ��� ������� Greedy, ����� � �� ����������� ��� ����� ��������� ������� ���� ��������.

P.S. 17:50 ����� �������� ���-����� ���� ������� � �������� ����� �����. ��� ����� ��������� ��� � ����� �� ����� ���-�� ����������.
P.S. 17:55 ��� ���-���� �� Greedy.
P.S. ������

*/

class Solution {
public:
    int largestRectangleArea(std::vector<int>& heights)
    {
        int IndexMax = -1;
        int Max = 0;
        for (int i = 0; i < heights.size(); i++)
        {
            if (heights[i] >= Max)
            {
                IndexMax = i;
                Max = heights[i];
            }
        }

        int Min = heights[IndexMax];
        int RightMaxSquare = 0;
        for (int i = IndexMax; i < heights.size(); i++)
        {
            if (heights[i] <= Min) Min = heights[i];
            int Square = (i - IndexMax + 1) * Min;
            if (Square >= RightMaxSquare) RightMaxSquare = Square;
        }

        Min = heights[IndexMax];
        int LeftMaxSquare = 0;
        for (int i = IndexMax; i >= 0; i--)
        {
            if (heights[i] <= Min) Min = heights[i];
            int Square = (IndexMax - i + 1) * Min;
            if (Square >= LeftMaxSquare) LeftMaxSquare = Square;
        }

        return std::max(LeftMaxSquare, RightMaxSquare);
    }
};
