#include <iostream>
#include <vector>

class Solution {
public:
	int longestOnes(std::vector<int>& nums, int k) {
		int c = 0;
		int temp_k = k;
		for (int i = 0, curr_c = 0; i < nums.size(); i++) {
			if (nums[i] == 1) curr_c++;
			else if (temp_k > 0) 
			{
				curr_c++;
				temp_k--;
			}
			else if (temp_k == 0 && nums[i] != 0) 
			{
				curr_c = k;
			}
			else if (temp_k == 0 && nums[i] == 0) 
			{
				curr_c = k;
			}
			c = std::max(c, curr_c);
		}
		return c;
	}
};

// 4 : 08 PM / After 40 minutes of making decisions, I didn't come up with anything good
// 7 / 28 / 2023 / The Failure

int main() {
	std::cout << "HELLO" << std::endl;
	std::vector<int> test = { 1,1,1,0,0,0,1,1,1,1,0 };
	Solution daps;
	daps.longestOnes(test, 2);
	return 0;
}