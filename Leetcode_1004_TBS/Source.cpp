#include <iostream>
#include <vector>

// The first collision with TBS
// 4 : 21 PM
// 7 / 28 / 2023

//class Solution {
//public:
//	int longestOnes(std::vector<int>& nums, int k) {
//		int i = 0, j = 0;
//		for (j = 0; j < nums.size(); j++) {
//			if (nums[j] == 0) k--;
//			if (k < 0 && nums[i++] == 0) k++;
//		}
//		return j - i;
//	}
//};

// 4 : 40 PM / after a 30 minute
// 7 / 28 / 2023 / 50-50%

class Solution {
public:
	int longestOnes(std::vector<int>& nums, int k) {
		int i = 0, j = 0;
		for (j = 0; j < nums.size(); j++) {
			if (nums[j] == 0) k--;
			if (k < 0 && nums[i++] == 0) k++;
		}
		return j - i;
	}
};

// 5 : 02 PM
// 7 / 28 / 2023 / SUCCESS
// The beast solution

// 11 : 21 PM / after a two day
// 7 / 29 / 2023 / SUCCESS



int main() {
	std::cout << "HELLO!" << std::endl;
	std::vector<int> test = { 1,1,1,0,0,0,1,1,1,1,0 };
	Solution daps;
	daps.longestOnes(test, 2);

	return 0;
}