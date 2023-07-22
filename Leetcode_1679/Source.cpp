#include <iostream>
#include <vector>
#include <unordered_map>

// The first collison
// 4 : 00 PM
// 7 / 22 / 2023

// 4 : 15 There was an idea with recursion
// 4 : 38 This a working version of problem with recursion 
// and hash table problem, but time limit exceeded(TLE)

//class Solution {
//public:
//	int maxOperations(std::vector<int>& nums, int k) {
//		std::unordered_map<int, int> map;
//		int c = 0;
//		for (int i = 0; i < nums.size(); i++) {
//			int delta = k - nums[i];
//			if (map.count(delta)) {
//				c++;
//				nums.erase(nums.begin() + i);
//				nums.erase(nums.begin() + map[delta]);
//				if (!nums.empty())
//					c += maxOperations(nums, k);
//			}
//			if (!nums.empty()) map[nums[i]] = i;
//		}
//		return c;
//	}
//};

// 4 : 50 PM
// The version without recursion, but i still have TLE

// 5 : 07 PM
// Okay, I realized something, the campaign does not need to 
// remove elements from the original array

//class Solution {
//public:
//	int maxOperations(std::vector<int>& nums, int k) {
//		std::unordered_map<int, int> map;
//		std::vector<int> temp;
//		int c = 0;
//		for (int i = 0; i < nums.size(); i++) {
//			int delta = k - nums[i];
//			if (map.count(delta)) {
//				c++;
//				nums.erase(nums.begin() + i);
//				nums.erase(nums.begin() + map[delta]);
//				i = -1;
//				map.clear();
//			}
//			if ( i >=0 ) map[nums[i]] = i;
//		}
//		return c;
//	}
//};

// 5 : 33 PM
// Not working solution

//class Solution {
//public:
//	int maxOperations(std::vector<int>& nums, int k) {
//		std::unordered_map<int, int> map;
//		int c = 0;
//		for (int i = 0; i < nums.size(); i++) {
//			int delta = k - nums[i];
//			if (map.count(delta)) {
//				c++;
//				map.erase(delta);
//			}
//			else map[nums[i]] = i;
//		}
//		return c;
//	}
//};

class Solution {
public:
	int maxOperations(std::vector<int>& nums, int k) {
		std::unordered_map<int, int> map;
		int c = 0;
		for (auto i : nums) {
			if (map[k - i] > 0) {
				c++;
				map[k - i]--;
			}
			else map[i]++;
		}
		return c;
	}
};

int main() {
	std::vector<int> test1 = { 1,2,3,4 };
	std::vector<int> test2 = { 2, 2, 2, 3, 1, 1, 4, 1 };
	Solution daps;
	daps.maxOperations(test1, 5);
	return 0;
}