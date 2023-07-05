#include <iostream>
#include <unordered_map>

//class Solution {
//public:
//	int romanToInt(std::string s) {
//		std::unordered_map<char, int> map = {{'I', 1},
//											  {'V', 5},
//			                                  {'X', 10},
//			                                  {'L', 50},
//			                                  {'C', 100},
//			                                  {'D', 500},
//			                                  {'M', 1000}};
//		int sum = map[s.back()];
//		for (int i = s.size() - 2; i >= 0; i--) {
//			if (map[s[i]] < map[s[i + 1]])
//				sum -= map[s[i]];
//			else
//				sum += map[s[i]];
//		}
//		return sum;
//	}
//};

// after a 30 min 7 / 5 /2023 SUCCES!

class Solution {
public:
	int romanToInt(std::string s) {
		std::unordered_map<int, int> map = { {'I', 1},
											 {'V', 5},
											 {'X', 10},
											 {'L', 50},
											 {'C', 100},
											 {'D', 500},
											 {'M', 1000} };
		int sum = map[s.back()];
		for (int i = s.size() - 2; i >= 0; i--) {
			if (map[s[i]] < map[s[i + 1]])
				sum -= map[s[i]];
			else
				sum += map[s[i]];
		}
		return sum;
	}
};

int main() {
	Solution daps;
	std::string s = "MCMXCIV";
	std::cout << daps.romanToInt(s);


	return 0;
}