#include <iostream>
#include <vector>

class Solution {
public:
	int longestSubarray(std::vector<int>& nums) {
		int cZeroes = 0;
		int lWindow = 0;
		for (int i = 0, begin = 0; i < nums.size(); i++) {
			cZeroes += (nums[i] == 0);
			while (cZeroes > 1) {
				cZeroes -= (nums[begin] == 0);
				begin++;
			}
			lWindow = std::max(lWindow, i - begin);
		}
		return lWindow;
	}
};

// 6 : 20 PM
// 8 / 12 / 2023 / SUCCESS

// 7 : 30 PM
// 8 / 12 / 2023 / SUCCESS
// After an hour

// 20 : 57 PM
// 21 / 08 / 2023 / SUCCESS

// 23 : 53 PM
// 27 / 08 / 2023 / SUCCESS
