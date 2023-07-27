#include <iostream>
#include <vector>
#include <string>

//class Solution {
//public:
//	int compress(std::vector<char>& chars) {
//		int indexAns = 0, index = 0;
//		while (index < chars.size()) {
//			char currentChar = chars[index];
//			int count = 0;
//			while (index < chars.size() && chars[index] == currentChar) {
//				index++;
//				count++;
//			}
//			chars[indexAns++] = currentChar;
//			if (count != 1) {
//				std::string s = std::to_string(count);
//				for (auto i : s)
//					chars[indexAns++] = i;
//			}
//		}
//		return indexAns;
//	}
//};

// need after 15 min repeat this nice solution

// SUCCESS!But it went hard.

// after a 5 hour 7 / 8 / 2023 SUCCESS!

// 7 / 12 / 2023 The failure!

// 7 / 12 / 2023 The SUCcesS!

// 4 : 12 PM / 13
// 7 / 15 / 2023 / SUCCESS!

// 12 : 30 PM
// 7 / 24 / 2023 / SUCCESS
// but i forgot '++' in chars[iRes++] = tempChar;

// 1 : 37 PM / 23
// 7 / 26 / 2023 / SUCCESS

class Solution {
public:
	int compress(std::vector<char>& chars) {
		int iRes = 0, i = 0;
		while (i < chars.size()) {
			char tempChar = chars[i];
			int c = 0;
			while (i < chars.size() && chars[i] == tempChar) {
				i++;
				c++;
			}
			chars[iRes++] = tempChar;
			if (c > 1) {
				std::string s = std::to_string(c);
				for (auto a : s)
					chars[iRes++] = a;
			}

		}
		return iRes;
	}
};
 
int main() {
	std::cout << "HELLO, world!";
	return 100;
}