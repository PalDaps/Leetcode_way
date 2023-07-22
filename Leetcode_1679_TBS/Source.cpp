#include <iostream>
#include <vector>
#include <unordered_map>

// 6 : 15 PM / after a 30 minute
// 7 / 22 / 2023 / SUCCESS

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