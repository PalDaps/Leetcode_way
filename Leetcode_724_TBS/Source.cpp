#include <iostream>
#include <vector>
#include <algorithm>

// 6 : 57 PM
// 8 / 17 / 2023
// This is a genius solution
class Solution {
	int pivotIndex(std::vector<int>& nums) {
		int lSum = 0;
		int rSum = 0;
		for (auto i : nums) {
			rSum += i;
		}
		for (int i = 0; i < nums.size(); i++) {
			rSum -= nums[i];
			if (lSum == rSum) return i;
			lSum += nums[i];
		}
		return -1;
	}
};

int main() {
	std::cout << "Google!";
	return 0;
}