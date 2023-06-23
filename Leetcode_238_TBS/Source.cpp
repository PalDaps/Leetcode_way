#include <iostream>
#include <vector>

class Solution
{
public:
	std::vector<int> productExceptSelf(std::vector<int>& nums) {
		std::vector<int> res(nums.size(), 1);
		for (int i = 0, suf = 1, pre = 1, n = nums.size(); i < n; i++) {
			std::cout << "START! i = " << i << std::endl;
			res[i] *= pre;
			std::cout << "res[i] *= pre : " << res[i] << " " << pre << std::endl;
			pre *= nums[i];
			std::cout << "pre *= nums[i] : " << pre << " " << nums[i] << std::endl;
			res[n - 1 - i] *= suf;
			std::cout << "res[n - 1 - i] *= suf : " << res[n - 1 - i] << " " << suf << std::endl;
			suf *= nums[n - 1 - i];
			std::cout << "suf *= nums[n - 1 - i] : " << suf << " " << nums[n - 1 - i] << std::endl;
		}
		for (auto i : res)
			std::cout << i << " ";
		return res;
	}
};

int main() {
	std::vector<int> test = { 1,2,3,4 };
	Solution daps;
	daps.productExceptSelf(test);
	return 0;
}