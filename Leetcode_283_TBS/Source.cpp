#include <iostream>
#include <vector>


// The firs collision with TBS 5 : 45 PM
// 7 / 17 / 2023
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

// 6 : 19 PM
// 7 / 17 / 2023 / SUCCESS

// 10 : 28 PM
// 7 / 17 / 2023 / SUCCESS

// 2 : 51 PM
// 7 / 18 / 2023 / SUCCES

int main() {
	std::vector<int> test = { 0, 1, 0, 3, 12 };
	Solution daps;
	daps.moveZeroes(test);
	return 0;
}