#include <iostream>
#include <vector>

class Solution
{
public:
	int searchInsert(std::vector<int>& nums, int target)
	{
		int l = 0;
		int r = nums.size();
		int middle = (l + r) / 2;
		while (l < r)
		{
			if (target == nums[middle])
			{
				return middle;
			}
			else if (target > nums[middle])
			{
				l = middle + 1;
			}
			else
			{
				r = middle - 1;
			}
			middle = (l + r) / 2;
		}
		for (int i = 0; i < nums.size()-1; i++)
		{
			if (nums[i] < target && target < nums[i + 1])
				return i+1;
		}
		return nums.size();
	}
};


int main()
{
	std::vector<int> anime = { 1, 3, 5, 6 };
	Solution daps;
	std::cout << daps.searchInsert(anime, 4);
	return 0;
}