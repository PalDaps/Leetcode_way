#include <iostream>
#include <vector>
#include <unordered_map>

/*
������:
���� ������ � ���������� �������. ����� ����� ����������� ����� �������� ��� ����������� �������.
�������� ���� ���� �����:
1) ������� 2 ����� � ���������� ���������.
1) ������� 3 ����� � ���������� ���������.

�������:
1. ������� ���-������� ��� ����, ����� ��������� ������� ������� �����.
2. ���� �����-���� ������ ����������� ���� ��� ���������� -1.
3. ������� ������� �������� ��������� ����� � ������ �����. � ���������� ���� ��������� � ����� ��������.
4. ���� ����� �� �������, ������ ���������� ���� �������� � �������������� �����.

*/


class Solution
{
public:
	int minOperations(std::vector<int>& Nums)
	{
		std::unordered_map<int, int> Map;
		for (auto i : Nums)
		{
			Map[i]++;
		}
		int Result = 0;
		for (auto i : Map)
		{
			int Temp = i.second;
			if (Temp == 1) return -1;
			Result += Temp / 3;
			if (Temp % 3) Result++;
		}
		return Result;
	}
};

// 17 : 50 PM / after an 1 day 
// 04 / 01 / 2024 / SUCCESS

// 12 : 38 PM / after a 5 days
// 09 / 01 / 2024 / Failure
// ������ ����� �������� ������� � ���, ������� ����� ������.
// �� ��� �� ��������� ��� �������� ��� ��� �������.
/*
Result += Freq / 3;
if (Freq % 3) Result++;

������� ���� ������.
[ 3, 3 ]

[ 3 ] -> 2

2/3 == 0
2%3 = 2 -> Result++;

�� ������� ������ ��� ��������� ��� ������ �������?

*/

class Solution
{
public:
	int minOperations(std::vector<int> Nums)
	{
		std::unordered_map<int, int> Map;
		int Result = 0;
		for (auto i : Nums) Map[i]++;
		for (auto i : Map)
		{
			int Freq = i.second;
			if (Freq == 1) return -1;
			Result += Freq / 3;
			if (Freq % 3) Result++; // ������ ������ ���� ��������
		}	
	}
};

int main()
{
	std::vector<int> Test3 = { 14, 12, 14, 14, 12, 14, 14, 12, 12, 12, 12, 14, 14, 12, 14, 14, 14, 12, 12 };
	Solution daps;
	daps.minOperations(Test3);
	return 0;
}