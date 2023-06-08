#include <iostream>
#include <string>
#include <cmath>
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