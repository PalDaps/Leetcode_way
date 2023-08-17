#include <iostream>
#include <vector>

// 5 : 55 PM
// 8 / 17 / 2023 / The first collison
// Almost a TBS solution
class Solution {
	int largestAltitud(std::vector<int>& gain) {
		int max = 0;
		for (int i = 0, temp = 0; i < gain.size(); i++) {
			max = std::max(max, temp += gain[i]);
		}
		return max;
	}
};

int main() {
	std::cout << "Google" << std::endl;
	return 0;
}