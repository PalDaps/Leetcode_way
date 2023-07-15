#include <iostream>
#include <vector>

class Solution
{
public:
	int searchInsert(std::vector<int>& nums, int target)
	{
		int l = 0;
		int r = nums.size() - 1;
		while (l < r)
		{
			int middle = (l + (r - l)) / 2; // One of the most difficult lines to understand in this code. It is needed to avoid overflow.
			if (nums[middle] == target)
				return middle;
			else if (target > nums[middle])
				l = middle + 1;
			else
				r = middle;
		}
		return nums[l] < target ? l + 1 : l; // Also an interesting line, which is difficult to understand. In general, it checks the last element that has not been checked by the main algorithm.
	}

};

// 2 : 50 PM / 3
// 7 / 15 / 2023 / SUCCESS!

int main()
{
	return 0;
}