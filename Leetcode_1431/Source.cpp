#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
	std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
		int index_max = 0;
		for (int i = 1; i < candies.size(); i++) {
			if (candies[index_max] < candies[i]) {
				index_max = i;
			}
		}
		int max = candies[index_max];
		for (int i = 0; i < candies.size(); i++) {
			candies[i] = max - candies[i] - extraCandies;
		}
		for (int i = 0; i < candies.size(); i++) {
			if (candies[i] > 0)
				candies[i] = 0;
			else
				candies[i] = 1;
		}
		std::vector<bool> result(candies.size());
		for (int i = 0; i < candies.size(); i++) {
			result[i] = candies[i];
		}
		return result;
	}
};

int main() {
	Solution daps;
	std::vector<int> test = { 4,2,1,1,2 };
	std::vector<bool> output = daps.kidsWithCandies(test, 1);
	for (auto i : output)
		std::cout << i << " ";
	return 0;
}
	