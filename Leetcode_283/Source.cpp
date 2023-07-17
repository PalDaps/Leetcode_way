#include <iostream>
#include <vector>

// The first collision 5 : 38 PM
// 7 / 17 / 2023 / It took about 5 minutes
class Solution {
public:
	void moveZeroes(std::vector<int>& nums) {
		int counter = 0;
		std::vector<int> res(nums.size(), 0);
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == 0) counter++;
			else res[i - counter] = nums[i];
		}
		nums = res;
	}
};

int main() {
	std::vector<int> test = { 0, 1, 0, 3, 12 };
	Solution daps;
	daps.moveZeroes(test);
	return 0;
}