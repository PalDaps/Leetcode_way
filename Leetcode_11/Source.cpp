#include <iostream>
#include <vector>

// The first collision with problem
// 3 : 10 PM
// 7 / 18 / 2023

class Solution {
public:
	int maxArea(std::vector<int>& height) {
		int sq = 0, temp_sq = 0;
		for (int i = 0; i < height.size(); i++) {
			for (int j = i + 1; j < height.size(); j++) {
				int a = std::min(height[i], height[j]);
				temp_sq = a * (j - i);
				if (temp_sq > sq) sq = temp_sq;
			}
		}
		return sq;
	}
};

int main() {
	std::vector<int> test1 = { 2, 2, 1 };
	std::vector<int> test2 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
	std::vector<int> test3 = { 0, 2 };
	Solution daps;
	std::cout << daps.maxArea(test3);
	return 0;
}