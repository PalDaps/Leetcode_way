#include <vector>

/*

02.08.2025
15:12

������: ���� ����� n. ����� ������� ���������� ��������� ����������� n - ������ �� n*n �����, ����� ��� ����� �� ����
���� �����.

����: BackTracking + Recursion

�������: 

������� check(board, i, j) - ����� �� �� ��������� ����� � i, j?
- ���� ���� � ���� ������� j ��� ����� �����, �� - ���.
- ������ i �� �������, ������ ��� ��� ������ ���, ��� ��� ������� ������� ����� ����
- ���� ���� �� ����� ��������� ����� �����, �� ���.
- ���� ���� �� ����� ��������� ����� �����, �� ���.
������� sovlve(board, i)
- ������������� ������� ������ ��������, ���� ����� �� �����, �� ���������� 1.
- ��������� ����� �� ��������� ����� � ������� (Row;Col). ���� ��, �� ������� ��������� ������ ������ ����������.
- ���� �� ����� ��������� ����� � �������, �� ������� ��������� ��� ��������� ������ ������.

P.S. 15:15 ������� �������� ��� ������ ~2 ���� ����� �� ����� �++ �� ������� �����������, ����� ������� � �����, ���
�� ������� ��������. �� � ������, ������� ��, ��� ������ �� ����.
P.S. 15:30 ���, ��� ��� ������ ������� ����� �� �������� ������������ ���������. ��� ���� �� ������ �����-������ ������.
� +/- ������ ���� � ������� backtracking. :)
P.S. 15:50 �����.
P.S. 17:10 ����� ��� ���� ������� ������. � �� ����� �� ����� :) ��������� ������ BackTracking � ���������, ��� 
������� ��������.
P.S. 17:22 ��� ��� �������

����������: https://www.cs.usfca.edu/~galles/visualization/RecQueens.html

*/


class Solution
{
public:
    bool check(std::vector<std::vector<bool>>& Board, int Row, int Col)
    {
        int n = Board.size(); // ��� ��� n*n, �� �� ����� ������ ����� ������ ��� ��������

        // ���� �� i == Row, ��� ��� ������ � (Row; Col) ����� ��������� �����
        for (int i = 0; i <= Row; i++)
        {
            if (Board[i][Col]) return false; // ���� � ������� ����� �����

            // >= ������ ��� ������� ����� Row - i == 0 � Col - i == 0 ��� ���� ����������
            if (Row - i >= 0 && Col - i >= 0 && Board[Row - i][Col - i]) return false;

            // �� n, ������ ��� ������� � ��������, ����� ����� � ��������� [0;n-1]
            if (Row - i >= 0 && Col + i < n && Board[Row - i][Col + i]) return false;
        }
        return true;
    }
    // ��� ����� BackTracking?
    int Solve(std::vector<std::vector<bool>>& Board, int Row)
    {
        // ������� ������ ��� �������� � ������ ��� ������ n == 1
        size_t Size = Board.size();
        if (Row == Size) return 1;
        // ���������� ���������
        int Count = 0;

        // ���� �� �������� 
        for (size_t Col = 0; Col < Size; Col++)
        {
            // ������ ����� �� ��������� ����� � Row � Col
            if (check(Board, Row, Col))
            {
                // ��������� �� �����
                Board[Row][Col] = true;

                Count += Solve(Board, Row + 1); // ���� �� ��������� ������
                // ������� ��������� ����� � ������ �������
                Board[Row][Col] = false;
            }
        }
        return Count;
    }
    int totalNQueens(int n)
    {
        std::vector<std::vector<bool>> Board(n, std::vector<bool>(n, 0));
        return Solve(Board, 0);
    }
};

/*

// Notes of repeats

// 02.08.2025  : Success
// 19:42       : After two hours! Success! But not fully understand idea 
// P.S.		   : Task +, Idea +/-, Solution +, Corner cases +

*/