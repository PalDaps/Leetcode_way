#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
	std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
		std::vector<bool> result;
		int max = *std::max_element(candies.begin(), candies.end());
		for (int i = 0; i < candies.size(); i++) {
			if (candies[i] + extraCandies >= max)
				result.push_back(true);
			else
				result.push_back(false);

		}
		return result;
	}
};