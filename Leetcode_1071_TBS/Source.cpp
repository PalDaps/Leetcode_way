#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
/*
class Solution {
public:
	std::string gcdOfStrings(std::string str1, std::string str2) {
		int ost = 1;
		int a = str1.size();
		int b = str2.size();
		if (a > b) std::swap(a, b);
		while (ost != 0) {
			ost = b % a;
			b = a;
			a = ost;
		}
		return (str1 + str2 == str2 + str1) ? str1.substr(0, b) : "";
	}

	
};
*/

// after 30 min
/*
class Solution {
public:
	std::string gcdOfStrings(std::string str1, std::string str2) {
		int ost = 1;
		int a = str1.size();
		int b = str2.size();
		if (a > b) std::swap(a, b);
		while (ost != 0) {
			ost = b % a;
			b = a;
			a = ost;
		}
		return (str1 + str2 == str2 + str2) ? str1.substr(0, b) : "";
	}
};
*/

// after a day 6/9/2023
// success
/*
class Solution {
public:
	std::string gcdOfStrings(std::string str1, std::string str2) {
		int ost = 1;
		int a = str1.size();
		int b = str2.size();
		if (a > b) {
			std::swap(a, b);
		}
		while (ost != 0) {
			ost = b % a;
			b = a;
			a = ost;
		}
		return str1 + str2 == str2 + str1 ? str1.substr(0, b) : "";
	}
};
*/

// success
// 6/13/2023
//class Solution {
//public:
//	std::string gcdOfStrings(std::string str1, std::string str2) {
//		int ost = 1;
//		int n = str1.size();
//		int m = str2.size();
//		if (n > m) std::swap(n, m);
//		while (ost != 0) {
//			ost = m % n;
//			m = n;
//			n = ost;
//		}
//		return str1 + str2 == str2 + str1 ? str1.substr(0, m) : "";
//	}
//};

//6/16/2023
// succes 110%!
// It's incredible, the Ebbinghouse curve works like this!
//class Solution {
//public:
//	std::string gcdOfStrings(std::string str1, std::string str2) {
//		int ost = 1;
//		int a = str1.size();
//		int b = str2.size();
//		if (a > b) std::swap(a, b);
//		while (ost != 0) {
//			ost = b % a;
//			b = a;
//			a = ost;
//		}
//		return str1 + str2 == str2 + str1 ? str1.substr(0, b) : "";
//
//	}
//};

// 6 / 21 / 2023
// SUCCESS!!!

// 7 / 4 / 2023
// Success!!!

// 7 / 8 / 2023
// SUCCESS!!

// 7 / 12 / 2023
// SUCCESS!!!

// 3 : 08 PM / 7 
// 7 / 15 / 2023 / SUCCESS

// 9 : 28 AM / 2
// 7 / 26 / 2023 / SUCCESS
// In the Train

// 14 : 51 PM
// 01 / 09 / 2023 / SUCCESS

// 18 : 03 PM
// 03 / 01 / 2024 / SUCCESS



class Solution {
public:
	std::string gcdOfStrings(std::string str1, std::string str2) {
		int ost = 1, a = str1.size(), b = str2.size();
		if (a > b) std::swap(a, b);
		while (ost > 0) {
			ost = b % a;
			b = a;
			a = ost;
		}
		return str1 + str2 == str2 + str1 ? str1.substr(0, b) : "";
	}
};

int main() {
	Solution daps;
	std::string str1 = "ABCABC";
	std::string str2 = "ABC";
	daps.gcdOfStrings(str1, str2);
}
