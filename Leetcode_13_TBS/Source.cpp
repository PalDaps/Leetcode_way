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

//class Solution {
//public:
//	int romanToInt(std::string s) {
//		std::unordered_map<int, int> map = { {'I', 1},
//											 {'V', 5},
//											 {'X', 10},
//											 {'L', 50},
//											 {'C', 100},
//											 {'D', 500},
//											 {'M', 1000} };
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


// after a day SUCCESS! 7 / 6 / 2023

//class Solution {
//public:
//    int romanToInt(std::string s) {
//        std::unordered_map<int, int> map = { {'I', 1},
//                                            {'V', 5},
//                                            {'X', 10},
//                                            {'L', 50},
//                                            {'C', 100},
//                                            {'D', 500},
//                                            {'M', 1000} };
//        int sum = map[s.back()];
//        for (int i = s.size() - 2; i >= 0; i--) {
//            if (map[s[i]] < map[s[i + 1]])
//                sum -= map[s[i]];
//            else
//                sum += map[s[i]];
//        }
//        return sum;
//    }
//};


// 7 / 7 / 2023 SUCCESS!
//class Solution {
//public:
//    int romanToInt(std::string s) {
//        std::unordered_map<char, int> map = { {'I', 1},
//                                             {'V', 5},
//                                             {'X', 10},
//                                             {'L', 50},
//                                             {'C', 100},
//                                             {'D', 500},
//                                             {'M', 1000} };
//        int sum = map[s.back()];
//        for (int i = s.size() - 2; i >= 0; i--) {
//            if (map[s[i]] < map[s[i + 1]])
//                sum -= map[s[i]];
//            else
//                sum += map[s[i]];
//        }
//        return sum;
//
//    }
//};

// 7 / 9 / 2023 / SUCCESS!

// 7 / 12 / 2023 / SUCCESS!

// 4 : 28 PM / 16
// 7 / 15 / 2023 / SUCCESS

// 9 : 52 AM / 4
// 7 / 26 / 2023 / SUCCESS
// but intsted of it map[s[i]] < map[s[i + 1]], i do it s[i] < s[i+1]

// 15 : 37 PM
// 01 / 09 / 2023 / The failure
// I forgot these lines map[s[i+1]] > map[s[i]] ... sum -= map[s[i]]
// ... sum += map[s[i]];

// 16 : 45 PM
// 01 / 09 / 2023 / SUCCESS
// Repeat this problem after an hour

// 15 : 30 PM
// 03 / 09 / 2023 / SUCCESS


class Solution {
public: 
    int romanToInt(std::string s) {
		std::unordered_map<char, int> map = { 
			{'I', 1}, 
			{'V', 5}, 
			{'X', 10}, 
			{'L', 50}, 
			{'C', 100}, 
			{'D', 500}, 
			{'M', 1000}};
		int sum = map[s.back()];
		for (int i = s.size() - 2; i >= 0; i--) {
			if (map[s[i]] < map[s[i + 1]]) sum -= map[s[i]];
			else sum += map[s[i]];
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