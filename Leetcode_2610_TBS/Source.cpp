#include <iostream>
#include <vector>
#include <array>

/*
������:
���� ������(����� � ��� ����� �����������), ���������� �� ����������� ���������� �������� 
������������ ��������� ������ ���, ����� � ����� ������ ���� ��������� �����.

�������:
                                                       
� ��� ���� ������ � ������� ������, ��� 1 <= nums[i] !!(<=)!! nums.length
������� ������� ������ ��� ������������ ������� ����������� �������� ������� Nums �������� Nums.size()+1
���� ������� ����� �� �������� ������� >= ���������� ����� � ��������� �������, �� ��������� ����� �������
������ ��������� � ������ �� ��������� ������� ����� �� �������� �������
� � ����� ����������� ������� ����� �� �������� �������, ������� ����������� �� ������ ������

*/ 
 


class Solution
{
public:
	std::vector<std::vector<int>> findMatrix(std::vector<int>& Nums)
	{
		std::vector<int> Frequence(Nums.size()+1);
		std::vector<std::vector<int>> Result;
		for (int i : Nums)
		{
			if (Frequence[i] >= Result.size())
			{
				Result.push_back({});
			}

			Result[Frequence[i]].push_back(i);
			Frequence[i]++;
		}
		return Result;
	}
};

// 13 : 42 PM / after a 15 min
// 03 / 01 / 2024 / SUCCESS

class Solution
{
public:
	std::vector<std::vector<int>> findMatrix(std::vector<int>& Nums)
	{
		std::vector<int> Freq(Nums.size() + 1);
		std::vector<std::vector<int>> Res;
		for (auto i : Nums)
		{
			if (Freq[i] >= Res.size())
			{
				Res.push_back({});
			}

			Res[Freq[i]].push_back(i);
			Freq[i]++;
		}
		return Res;
	}
};

// 14 : 57 PM / after an 1 hour 
// 03 / 01 / 2024 / SUCCESS


// 17 : 45 PM / after an 1 day 
// 04 / 01 / 2024 / SUCCESS

// 11 : 36 AM / after a five days
// 09 / 01 / 2023 / Failure
// ������� ���� ������� � ����� ����� �� ���� ���������. �������� ���� � ���� �������:
// Result[Freq[i]].push_back(i) - �� ��� ������ ��� � ������� �������� ����� �� Nums  �
// ����������, ��� ��� ������ ���� ���������. � ������ ������� ������������� �� ������ ���,
// � �� ����� �������. ���� ������� �������, �� ��������� ���������� ������� �������.
// 1
class Solution
{
public:
	std::vector<std::vector<int>> findMatrix(std::vector<int> Nums)
	{
		std::vector<int> Freq(Nums.size() + 1);
		std::vector<std::vector<int>> Result;
		for (auto i : Nums)
		{
			if (Freq[i] >= Result.size()) Result.push_back({});
			Result[Freq[i]].push_back(i);
			Freq[i]++;
		}
		return Result;
	}
};





int main()
{
	std::vector<int> Test1 = { 1,3,4,1,2,3,1 };
	std::vector<int> Test2 = { 100,5,3,3,3 };
	Solution daps;
	daps.findMatrix(Test2);
	return 0;
}