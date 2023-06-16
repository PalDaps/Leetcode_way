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
// succes
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

// succes
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
		return str1 + str2 == str2 + str1 ? str1.substr(0, b) : "";

	}
};

int main() {
	Solution daps;
	std::string str1 = "ABCABC";
	std::string str2 = "ABC";
	daps.gcdOfStrings(str1, str2);
}
