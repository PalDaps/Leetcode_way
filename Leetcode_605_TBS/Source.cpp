#include <iostream>
#include <vector>

/*
class Solution {
public:
	bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
		flowerbed.insert(flowerbed.begin(), 0);
		flowerbed.push_back(0);
		for (int i = 1; i < flowerbed.size() - 1; i++) {
			if (flowerbed[i - 1] + flowerbed[i] + flowerbed[i + 1] == 0) {
				n--;
				i++;
			}
		}
		return n <= 0;
	}
};
*/

//after 10 min checked 6/11/2023

//class Solution {
//public:
//	bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
//		flowerbed.insert(flowerbed.begin(), 0);
//		flowerbed.push_back(0);
//		for (int i = 1; i < flowerbed.size()-1; i++) {
//			if (flowerbed[i - 1] + flowerbed[i] + flowerbed[i + 1] == 0) {
//				n--;
//				i++;
//			}
//		}
//		return n <= 0;
//	}
//};

// succes 80% i forgot i++, n-- and method insert
// 6/13/2023
//class Solution {
//public:
//	bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
//		flowerbed.insert(flowerbed.begin(), 0);
//		flowerbed.push_back(0);
//		for (int i = 1; i < flowerbed.size() - 1; i++) {
//			if (flowerbed[i - 1] + flowerbed[i] + flowerbed[i + 1] == 0) {
//				n--;
//				i++;
//			}
//		}
//		return n <= 0;
//	}
//};

// 6/16/2023
// suscces
//class Solution {
//public:
//	bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
//		flowerbed.insert(flowerbed.begin(), 0);
//		flowerbed.push_back(0);
//		for (int i = 1; i < flowerbed.size() - 1; i++) {
//			if (flowerbed[i - 1] + flowerbed[i] + flowerbed[i + 1] == 0) {
//				i++;
//				n--;
//			}
//		}
//		return n <= 0;
//	}
//};

// 6/16/2023
// suscces!!


int main() {
	Solution daps;
	std::vector<int> test = { 0 };
	std::cout << daps.canPlaceFlowers(test, 1);
}