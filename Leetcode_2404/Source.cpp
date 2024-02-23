#include <iostream>
#include <vector>
#include <unordered_map>

class Solution
{
public:
	int mostFrequenEven(std::vector<int>& nums)
	{
		std::unordered_map<int, int> mFrequenñies;
		for (size_t i = 0; i < nums.size(); i++)
		{
			if (nums[i] % 2 == 0)
				mFrequenñies[nums[i]]++;
		}
		std::pair<int, int> MaxFrequency = { INT_MAX, 0 };
		for (const auto& pair : mFrequenñies)
		{
			if (pair.second >= MaxFrequency.second)
			{
				if (pair.first > MaxFrequency.first && pair.second == MaxFrequency.second)
				{
				}
				else MaxFrequency = pair;
			}
		}
		return MaxFrequency.first == INT_MAX ? -1 : MaxFrequency.first;
	}
};

int main()
{
	Solution daps;
	std::vector<int> Test1 = { 0,1,2,2,4,4,1 };
	int Result = daps.mostFrequenEven(Test1);
	return 0;
}