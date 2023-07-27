#include <iostream>
#include <vector>

// The first collision with TBS problem on sliding window
// 1 : 44 PM
// 7 / 27 / 2023 
// According to the Editorial sliding window, it was 
// difficult to understand what it is, I'll try to figure out the code

//class Solution {
//public:
//	double findMaxAverage(std::vector<int>& nums, int k) {
//		double sum = 0;
//		for (int i = 0; i < k; i++) {
//			sum += nums[i];
//		}
//		double res = sum; 
//		for (int i = k; i < nums.size(); i++) {
//			sum += nums[i] - nums[i - k];
//			res = std::max(res, sum);
//		}
//		return res/k;
//	}
//};

// 2 : 42 PM / after a 30 minute
// 7 / 27 / 2023 / SUCCESS

int main() {
	Solution daps;
	std::vector<int> test = {1, 12, 4, 5};
	std::cout << daps.findMaxAverage(test, 2);
	return 0;
}