#include <iostream>
#include <vector>
#include <unordered_map>

// 6 : 15 PM / after a 30 minute
// 7 / 22 / 2023 / SUCCESS

//class Solution {
//public:
//	int maxOperations(std::vector<int>& nums, int k) {
//		std::unordered_map<int, int> map;
//		int c = 0;
//		for (auto i : nums) {
//			if (map[k - i] > 0) {
//				c++;
//				map[k - i]--;
//			}
//			else map[i]++;
//		}
//		return c;
//	}
//};

// 4 : 21 PM
// 7 / 23 / 2023 / SUCCESS

// 12 : 03 PM
// 7 / 24 / 2023 / SUCCESS

// 10 : 24 AM / 8
// 7 / 26 / 2023 / SUCCESS

// 10 : 53 PM / after a two week
// 8 / 5 / 2023 / SUCCESS
// I still don't understand the meaning of this solution to the problem

// 0 : 00 AM
// 28 / 08 / 2023 / SUCCESS


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

	return 0;
}