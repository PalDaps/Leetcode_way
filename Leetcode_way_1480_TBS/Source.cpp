#include <iostream>
#include <vector>


class Solution {
public:
	std::vector<int> runningSum(std::vector<int>& nums) {
		for (int i = 1; i < nums.size(); i++) {
			nums[i] += nums[i - 1];
		}
		return nums;
	}
};

// 7 : 55 PM
// 7 / 14 / 2023 / SUCCESS

// 2 : 46 PM / 2
// 7 / 15 / 2023 / SUCCESS