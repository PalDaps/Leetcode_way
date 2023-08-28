#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

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