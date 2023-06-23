#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
	bool increasingTriplet(std::vector<int>& nums) {
		for (int i = 1; i < nums.size(); i++) {
			int pre_min = *std::min_element(nums.begin(), nums.begin() + i);
			int pre_max = *std::max_element(nums.begin()+i, nums.end());
			if (pre_min < nums[i] && nums[i] < pre_max)
				return true;
		}
		return false;
	}
};

int main() {
	Solution daps;
	std::vector<int> test = { 20,100,10,12,5,13 };
	std::cout << daps.increasingTriplet(test);
	return 0;
}