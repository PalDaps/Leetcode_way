#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

class Solution {
public:
	bool uniqueOccurances(std::vector<int>& arr) {
		std::unordered_map<int, int> map;
		std::unordered_set<int> set;
		for (auto i : arr) map[i]++;
		for (auto i : map) set.insert(i.second);
		return map.size() == set.size();
	}
};

// 13 : 24 PM
// 20 / 09 / 2023 / SUCCESS