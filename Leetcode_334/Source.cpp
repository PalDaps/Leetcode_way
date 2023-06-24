#include <iostream>
#include <vector>
#include <algorithm>

//class Solution {
//public:
//	bool increasingTriplet(std::vector<int>& nums) {
//		for (int i = 1; i < nums.size(); i++) {
//			int pre_min = *std::min_element(nums.begin(), nums.begin() + i);
//			int pre_max = *std::max_element(nums.begin()+i, nums.end());
//			if (pre_min < nums[i] && nums[i] < pre_max)
//				return true;
//		}
//		return false;
//	}
//};

class Solution {
public:
	bool increasingTriplet(std::vector<int>& nums) {
		/*for (int i = 1; i < nums.size(); i++) {
			bool first = false;
			bool third = false;
			for (int pre = 0; pre < i; pre++) {
				if (nums[pre] < nums[i]) {
					first = true;
					break;
				}
			}
			for (int aft = nums.size() - 1; aft > i; aft--) {
				if (nums[aft] > nums[i]) {
					third = true;
					break;
				}
			}
			if (first && third) return true;
		}*/
		for (int i = 1; i < nums.size(); i++) {
			std::vector<int> temp = nums;
			std::sort(temp.begin(), temp.begin() + i);
			std::sort(temp.begin() + i + 1, temp.end());
			if (temp[0] < temp[i] && temp[i] < temp[nums.size()-1])
				return true;
		}
		return false;
	}
};

int main() {
	Solution daps;
	std::vector<int> test = { 20,100,10,12,5,13 };
	std::cout << "NOT SORT" << std::endl;
	for (auto i : test)
		std::cout << i << " ";
	std::cout << std::endl << "SORTED" << std::endl;
	std::sort(test.begin(), test.begin()+3);
	for (auto i : test)
		std::cout << i << " ";
	std::cout << daps.increasingTriplet(test);
	return 0;
}