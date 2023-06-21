#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

class Solution {
public:
	std::vector<int> productExceptSelf(std::vector<int>& nums) {
		int counter = 0, composition = 1;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] != 0) composition = nums[i] * composition;
			else counter++;
		}
		for (int i = 0; i < nums.size(); i++) {
			if (counter == 0) {
				nums[i] = composition * pow(nums[i], -1);
			}
			else if (counter == 1) {
				if (nums[i] == 0) {
					nums[i] = 1;
					nums[i] = composition * pow(nums[i], -1);
				}
				else {
					nums[i] = (counter-1) * pow(nums[i], -1);
				}
			}
			else nums[i] = 0;
		}
		for (auto i : nums)
			std::cout << i << " ";
		return nums;
	}
};

int main() {
	Solution daps;
	std::vector<int> test = { -1,1,0,-3,3 };
	daps.productExceptSelf(test);
	return 0;
}