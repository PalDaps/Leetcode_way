#include <iostream>
#include <vector>

class solution
{
public:
	int pivotIndex(std::vector<int>& nums)
	{
		int sum_left = 0, sum_right = 0, count = 0, safe_i = 0, pivot = 0;
		int sum_left_one = 0, sum_right_last = 0;
		for (int i = 0; i < nums.size(); i++) // the sum of all left elem
		{
			for (int k = 0; k < i+1; k++)
			{
				sum_left = nums[k] + sum_left;
			}
			for (int j = i + 2; j < nums.size(); ++j) // the sum of right all elem
			{
				sum_right = nums[j] + sum_right;
			}
			for (int j = 1; j < nums.size(); ++j)
			{
				sum_left_one = nums[j] + sum_left_one;
			}
			for (int j = 0; j < nums.size() - 1; ++j)
			{
				sum_right_last = nums[j] + sum_right_last;
			}
			if (sum_left == sum_right)
			{
				count++;
				safe_i = i + 1;
			}
			sum_left = 0;
			sum_right = 0;
		}
		if (count == 0) return -1;
		else if (sum_left_one == 0 || sum_right_last) return 0;
		else return safe_i;
	}
};

int main()
{
	std::vector<int> nums = { 1, 2, 4, 2, 7, 9 };
	solution processing;
	std::cout << processing.pivotIndex(nums);
	return 0;
}