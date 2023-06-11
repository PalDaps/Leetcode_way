#include <iostream>
#include <vector>

class Solution {
public:
	bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
		int counter_zebra = 0;
		bool flag = false;
		for (int i = 1; i < flowerbed.size(); i++) {
			if (flowerbed[i - 1] != flowerbed[i]) {
				counter_zebra++;
			}
		}
		if (counter_zebra == flowerbed.size() - 1 && flowerbed.size() > 1 && n != 0)
			return false;
		if (flowerbed[0] == 0)
			flowerbed.insert(flowerbed.begin(), 0);
		if (flowerbed[flowerbed.size() - 1] == 0) {
			flowerbed.push_back(0);
			flag = true;
		}
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
				if (flowerbed[i - 1] == flowerbed[flowerbed.size() - 2] && flowerbed[i] == flowerbed[flowerbed.size() - 1] && flowerbed[flowerbed.size() - 3] == 1)
					break;
				if (counter_null == 3) {
					n--;
					if (n == 0) return true;
					counter_null = 1;
				}
			}
		}
		return false;
	}
};

int main() {
	std::vector<int> test = { 1,0,1,0,0,1,0 };
	Solution daps;
	std::cout << daps.canPlaceFlowers(test, 1);
	return 0;
}