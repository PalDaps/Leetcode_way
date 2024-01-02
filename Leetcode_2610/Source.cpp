#include <iostream>
#include <vector>
#include <unordered_map>

class Solution
{
public:
	std::vector<std::vector<int>> findMatrix(std::vector<int>& Nums)
	{
		std::unordered_map<int, int> Map;
		size_t MaxRows = 0;
		for (size_t i = 0, PrevMax = 0; i < Nums.size(); i++)
		{
			Map[Nums[i]]++;
			PrevMax = Map[Nums[i]];
			if (PrevMax > MaxRows)
			{
				MaxRows = PrevMax;
			}
		}
		std::vector<std::vector<int>> Vector(MaxRows);
		size_t j = 0;
		for (auto i : Map)
		{
			i.second--;
			int Row = i.second;
			if (Row == 0)
			{
				Vector[Row].push_back(i.first);
			}
			else
			{
				while (Row >= 0)
				{
					Vector[Row].push_back(i.first);
					Row--;
				}
			}
			j++;
		}
		return Vector;
	}
};

int main()
{
	std::vector<int> Test1 = { 1,3,4,1,2,3,1 };
	Solution daps;
	daps.findMatrix(Test1);
	std::cout << "HELLO, i am come back!";
	return 0;
}
