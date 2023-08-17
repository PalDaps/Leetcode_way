#include <iostream>
#include <vector>

// 6 : 48 PM
// 8 / 17 / 2023 / I'm getting stronger
// After 5 months and 29 days I did this task in 20 minutes with 
// good results time > 80% and memory > 80%. We are working further.
// This solution can be improved.
class solution
{
public:
	int pivotIndex(std::vector<int>& nums)
	{
	//	int sum_left = 0, sum_right = 0, count = 0, safe_i = 0, pivot = 0;
	//	int sum_left_one = 0, sum_right_last = 0;
	//	int a = -1, b = 0;
	//	for (int i = 0; i < nums.size(); i++) 
	//	{
	//		for (int k = 0; k < i+1; k++) // the sum of all left elem
	//		{
	//			sum_left = nums[k] + sum_left;
	//		}
	//		for (int j = i + 2; j < nums.size(); ++j) // the sum of right all elem
	//		{
	//			sum_right = nums[j] + sum_right;
	//		}
	//		if (sum_left == sum_right && sum_left !=0 )
	//		{
	//			count++;
	//			if ( count == 1 ) safe_i = i + 1;
	//		}
	//		sum_left = 0;
	//		sum_right = 0;
	//	}
	//	for (int j = 1; j < nums.size(); ++j) // [0] == sum(0) ?
	//	{
	//		sum_left_one = nums[j] + sum_left_one;
	//	}
	//	for (int j = 0; j < nums.size() - 1; ++j) // sum(0) == [nums.size()] ?
	//	{
	//		sum_right_last = nums[j] + sum_right_last; 
	//	}
	//
	//if (count == 0 && sum_left_one != 0 && sum_right_last != 0 ) return a;
	//else if (sum_left_one == 0 ) return b;
	//else if (sum_right_last == 0) return nums.size() -1;
	//else return safe_i;
		int sum_all = 0;
		for (int i = 0; i < nums.size(); i++)
			sum_all += nums[i];
		if (0 == sum_all - nums[0]) return 0;
		for (int i = 1, pre = 0; i < nums.size()-1; i++) {
			pre += nums[i - 1];
			if (pre == sum_all - nums[i] - pre) return i;
		}
		if (0 == sum_all - nums[nums.size() - 1]) return nums.size() - 1;
		return -1;
	}
};

int main()
{
	std::vector<int> nums = { -1,-1,0,0,-1,-1 };
	solution processing;
	std::cout << processing.pivotIndex(nums);
	return 0;
}