#include <iostream>
#include <vector>

class Solution {
public:
	void moveZeroes(std::vector<int>& nums) {
		int countOfZeroes = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == 0) countOfZeroes++;
			else if (countOfZeroes > 0) {
				int temp = nums[i];
				nums[i] = 0;
				nums[i - countOfZeroes] = temp;
			}
		}
	}
};

int main() {
	std::vector<int> test = { 0, 1, 0, 3, 12 };
	Solution daps;
	daps.moveZeroes(test);
	return 0;
}