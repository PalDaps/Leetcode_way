#include <iostream>
#include <vector>

// The first collision. I couldn't come up with my own quick enough solution in 30 minutes, 
// so I needed an editorial on leetcode, which I'll try to reproduce now
// 5 : 13 PM
// 7 / 23 / 2023

// 5 : 42 PM
// Went to tilt. I sat for 20 minutes thinking how to write the prefix sum 
// of elements from the old one into a new array and wondered why it 
// didn't work. why is that? probably not enough concentration, 
// because as soon as i started running the program with the debugger, 
// i realized that i presented the algorithm correctly, but in total 
// i took the wrong element, where the prefix sum is not saved.

// 5 : 58  PM
// It seems like this is a very weak solution

class Solution {
public:
	double findMaxAverage(std::vector<int>& nums, int k) {
		std::vector<int> sum(nums.size(), 0);
		sum[0] = nums[0];
		for (int i = 1; i < nums.size(); i++) {
			sum[i] = sum[i-1] + nums[i]; 
		}
//		for (auto i : sum)
//		std::cout << i << " ";
		double sum_of = sum[k - 1] * 1.0 / k;
		for (int i = k; i < nums.size(); i++) {
			sum_of = std::max(sum_of, (sum[i] - sum[i - k])*1.0/k);
		}
		return sum_of;
	}
};

// 12 : 00 PM
// 7 / 24 / 2024 / The failure
// res = std::max(res, (pre[i] - pre[i-k])*1.0/k);

int main() {
	std::vector<int> test1 = { 1,12,-5,-6,50,3, -30, 25 };
	Solution daps;
	daps.findMaxAverage(test1, 4);
	return 0;
}