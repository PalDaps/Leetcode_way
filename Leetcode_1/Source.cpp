#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
	std::vector<int> twoSum(std::vector<int>& nums, int target)
	{
		int p = 0;
		std::vector<int> numsMinus;
		std::vector<int> sum;
		for (int i = 0; i < nums.size() - 1; i++)
		{
			int temp;
			temp = target - nums[i];
			numsMinus.push_back(temp);
		}
		for (int i = 0; i < nums.size(); i++)
		{
			    for (int j = 0; j < nums.size(); j++)
			    {
			    	if (numsMinus[i] == nums[j] && i != j)
			    	{
						p++;
			    		sum.push_back(i);
			    		sum.push_back(j);
						return sum;
			    	}
			    }
		}
		numsMinus = { 0, 0 };
		return numsMinus;
	}
};

int main()
{
/*
	int target = 6;
	std::vector<int> anime = { -1,-2,-3,-4,-5 };
	Solution daun;
	std::vector<int> hi = daun.twoSum(anime, -8);
	for (auto i : hi)
		std::cout << i << " ";
*/
	return 0;
}