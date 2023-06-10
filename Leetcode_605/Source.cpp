#include <iostream>
#include <vector>

class Solution {
public:
	bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
		if (flowerbed[0] == 0)
			flowerbed.insert(flowerbed.begin(), 0);
		if (flowerbed[flowerbed.size() - 1] == 0)
			flowerbed.push_back(0);
		for (int i = 1; i < flowerbed.size(); i++) {
			if (flowerbed[i - 1] == 1 && flowerbed[i] != 0)
				return false;
			if (flowerbed[i - 1] != 0 && flowerbed[i] == 1)
				return false;
		}
		if (n == 0) return true;
		int counter_null = 1;
		for (int i = 1; i < flowerbed.size(); i++) {
			if (flowerbed[i - 1] == 0 && flowerbed[i] == 0) {
				counter_null++;
				if (counter_null == 3) {
					n--;
					if (n == 0) return true;
					counter_null = 1;
				}
			}
			else
				counter_null = 0;
		}
		return false;
	}
};

int main() {
	std::vector<int> test = {0, 1, 0};
	Solution daps;
	std::cout << daps.canPlaceFlowers(test, 1);
	return 0;
}