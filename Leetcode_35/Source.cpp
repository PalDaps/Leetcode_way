#include <iostream>
#include <vector>

class Solution
{
public:
	int searchInsert(std::vector<int>& nums, int target)
	{
		if (nums.size() == 1)
		{
			if (nums[0] < target)
				return 1;
			else
				return 0;
		}
		int l = 0;
		int r = nums.size();
		int middle = (l + r) / 2;
		while (l <= r )
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
			if (middle > nums.size() - 1)
				break;
		}
		for (int i = 0; i < nums.size()-1; i++)
		{
			if (nums[i] < target && target < nums[i + 1])
				return i + 1;
			else if (nums[nums.size() - 1] < target)
				return nums.size();
		}
		return 0;
	}
};

// after a 5 minute 7:36 PM
// 7 / 14 / 2023 / SUCCES!
// I also don't fully understand how to reach such a decision.


int main()
{
	std::vector<int> anime = { 1,4,6,7,8,9 };
	std::vector<int> test2 = { 1 };
	std::vector<int> test3 = { 1, 3, 5, 6 };
	Solution daps;
	std::cout << daps.searchInsert(test3, 5);
	return 0;
}