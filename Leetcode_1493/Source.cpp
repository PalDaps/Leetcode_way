#include <iostream>
#include <vector>

// 11 : 40 PM
// 8 / 10 / 2023 
// I didn't even have a thought how it could be solved'

// The first collision with problem
// 4 : 47 PM
// 8 / 12 / 2023
// I pulled myself together and just started doing
// In 5 minutes with normal concentration, I threw a good solution

class Solution {
public:
	int longestSubarray(std::vector<int>& nums) {
		int lengthOnes = 0;
		for (int i = 0, tLength = 0, pre = 100, cZeroes = 2; i < nums.size(); i++) {
			if (nums[i] == 1) {
				if (cZeroes == 1 &&  pre == 1) tLength = 0;
				tLength++;
			}
			else {
				cZeroes--;
				if (cZeroes < 0 || nums[i] == pre) {
					cZeroes = 2;
					tLength = 0;
				}
			}
			lengthOnes = std::max(tLength, lengthOnes);
			pre = nums[i];
		}
		return lengthOnes == nums.size() ? lengthOnes - 1 : lengthOnes;
	}
};



int main() {
	std::vector<int> test_1 = { 1,1,0,1 };
	std::vector<int> test_2 = { 0,1,1,1,0,1,1,0,1 };
	std::vector<int> test_3 = { 1, 1, 1 };
	std::vector<int> test_37 = { 1, 1, 0, 0, 1, 1, 1, 0, 1 };
	std::vector<int> test_37_2 = { 1, 0, 1, 0, 1, 0 };
	Solution daps;
	daps.longestSubarray(test_37_2);
	return 0;
}