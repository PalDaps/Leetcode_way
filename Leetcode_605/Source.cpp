#include <iostream>
#include <vector>

class Solution {
public:
	bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
		/* if (flowerbed.size() == 1 && flowerbed[0] == 0) return true;
		int counter_zebra = 0;
		bool flag = false;
		for (int i = 1; i < flowerbed.size(); i++) {
			if (flowerbed[i - 1] != flowerbed[i]) {
				counter_zebra++;
			}
		}
		if (counter_zebra == flowerbed.size() - 1 && flowerbed.size() > 1 && n != 0)
			return false;
		// if (flowerbed[0] == 0)
			// flowerbed.insert(flowerbed.begin(), 0);
		// if (flowerbed[flowerbed.size() - 1] == 0) {
			// flowerbed.push_back(0);
			// flag = true;
	// 	}
		for (int i = 1; i < flowerbed.size(); i++) {
			if (flowerbed[i - 1] == 1 && flowerbed[i] != 0)
				return false;
			if (flowerbed[i - 1] != 0 && flowerbed[i] == 1)
				return false;
		}
		if (n == 0) return true;
		int counter_null = 1;
		bool flag_start = false;
		bool flag_finish = false;
		for (int i = 1; i < flowerbed.size(); i++) {
			if (i==1 && flowerbed[0] == 0 && flowerbed[1] == 0 && !flag_start) {
				counter_null++;
				flag_start = 1;
				n--;
				if (n == 0) return true;
			}
			if (flowerbed[i - 1] == 0 && flowerbed[i] == 0 && i < flowerbed.size() - 1 && i > 1) {
				counter_null++;
				if (counter_null == 3) {
					n--;
					if (n == 0) return true;
					counter_null = 1;
				}
			}
			if (i == flowerbed.size()-1 && flowerbed[flowerbed.size()-1] == 0 && flowerbed[flowerbed.size() - 2] == 0 && !flag_finish && flowerbed.size() > 2) {
				counter_null++;
				flag_finish = 1;
				n--;
				if (n == 0) return true;
			}
		}
		return false;
		*/
		std::vector<int> result;
		int fivex = 0;
		int lavex = flowerbed.size() - 1;
		int size = flowerbed.size();
		for (int i = 0; i < flowerbed.size()-1; i++) {
			if (i == 0 && flowerbed[fivex] == 0 && flowerbed[i + 1] == 0) {
				n--;
				result.push_back(1);
				result.push_back(0);
			}
			else {
				result.push_back(flowerbed[i]);
				result.push_back(flowerbed[i+1]);
			}
			if (i == flowerbed.size() - 2 && flowerbed[lavex] == 0 && flowerbed[flowerbed.size() - 2] == 0 && flowerbed.size()>2) {
				n--;
				result.push_back(0);
				result.push_back(1);
			}
			else {
				result.push_back(flowerbed[size-2]);
				result.push_back(flowerbed[size-1]);
			}

		}
		for (auto i : result)
			std::cout << i << " ";
		std::cout << std::endl;
		return false;
	}
};

int main() {
	std::vector<int> test = { 0, 0, 0, 1};
	Solution daps;
	std::cout << daps.canPlaceFlowers(test, 2);
	return 0;
}