#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
	std::vector<int> twoSum(std::vector<int>& nums, int target)
	{
		std::vector<int> sum;
		int delta = 0;
		int safe_first_i;
		int safe_second_i;
		std::sort(nums.begin(), nums.end()); 
		for (int i = 0; i < nums.size()-1; i++)
		{
			if ( nums[i] < target )
			{
				safe_first_i = i;
				delta = target - nums[i];
				int left= 0;
				int right = nums.size()-1;
				int index_middle = (left + right) / 2;
				while (left < right)
				{
					if (nums[index_middle] == delta)
					{
						sum.push_back(index_middle);
						sum.push_back(safe_first_i);
						break;
					}
					else if (delta > nums[index_middle] )
					{
						left = index_middle + 1;
					}
					else
					{
						right = index_middle - 1;
					}
					index_middle = (left + right) / 2;
				}
			}
			break;
		}
		for (auto i : sum)
			std::cout << i << " ";
		return sum;
	}
};

int main()
{
	int target = 6;
	std::vector<int> anime = { 1, 2, 2, 2, 2, 2 };
	Solution daun;
	daun.twoSum(anime, 2);
	return 0;
}