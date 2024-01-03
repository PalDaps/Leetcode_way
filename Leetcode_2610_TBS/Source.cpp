#include <iostream>
#include <vector>

/*
�������:

� ��� ���� ������ � ������� ������, ��� 1 <= nums[i] <= nums.length
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



int main()
{
	std::vector<int> Test1 = { 1,3,4,1,2,3,1 };
	std::vector<int> Test2 = { 100,5,3,3,3 };
	Solution daps;
	daps.findMatrix(Test2);
	return 0;
}