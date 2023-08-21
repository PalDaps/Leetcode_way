#include <iostream>
#include <vector>

// 6 : 25 PM
// 8 / 17 / 2023
// I have no idea how else it can be accelerated

// 20 : 21 PM
// 21 / 08 / 2023 / SUCCESS
class Solution {
	int largestAltitud(std::vector<int>& gain) {
		int max = 0;
		for (int i = 0, temp = 0; i < gain.size(); i++) {
			temp += gain[i];
			if (temp > max) max = temp;
		}
		return max;
	}
};

int main() {
	std::cout << "Google" << std::endl;
	return 0;
}

