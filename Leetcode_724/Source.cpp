#include <iostream>
#include <vector>

class solution
{
public:
	int pivotIndex(std::vector<int>& nums)
	{
		int sum_left = 0, sum_right = 0, count = 0, safe_i = 0, pivot = 0;
		int sum_left_one = 0, sum_right_last = 0;
		int a = -1, b = 0;
		for (int i = 0; i < nums.size(); i++) 
		{
			for (int k = 0; k < i+1; k++) // the sum of all left elem
			{
				sum_left = nums[k] + sum_left;
			}
			for (int j = i + 2; j < nums.size(); ++j) // the sum of right all elem
			{
				sum_right = nums[j] + sum_right;
			}
			if (sum_left == sum_right && sum_left !=0 )
			{
				count++;
				if ( count == 1 ) safe_i = i + 1;
			}
			sum_left = 0;
			sum_right = 0;
		}
		for (int j = 1; j < nums.size(); ++j) // [0] == sum(0) ?
		{
			sum_left_one = nums[j] + sum_left_one;
		}
		for (int j = 0; j < nums.size() - 1; ++j) // sum(0) == [nums.size()] ?
		{
			sum_right_last = nums[j] + sum_right_last; 
		}
	
	if (count == 0 && sum_left_one != 0 && sum_right_last != 0 ) return a;
	else if (sum_left_one == 0 ) return b;
	else if (sum_right_last == 0) return nums.size() -1;
	else return safe_i;
	}
};

int main()
{
	std::vector<int> nums = { -1,-1,0,0,-1,-1 };
	solution processing;
	std::cout << processing.pivotIndex(nums);
	return 0;
}