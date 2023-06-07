#include <iostream>
#include <string>

class Solution {
public:
	std::string gcdOfString(std::string str1, std::string str2) {
		std::string substring = "";
		bool flag = 0;
		for (int i = 1; i < str1.size(); i++) {
			std::string temp = "";
			temp = str1.substr(0, i);
			for (int j = 0; j < str1.size()-i+1 || substring.size()>str1.size(); j++) {
				for (int k = 0; k < temp.size(); k++) {
				substring.push_back(temp[k]);
				}
				if (substring == str1) {
					flag = true;
					substring = temp;
					break;
				}
				if (flag) break;
			}
			if (flag) break;
			substring = "";
		}
		return "";
	}
};

int main() {
	std::string test = "ABCABCABCABCABCABC";
	std::string test1 = "ABAB";
	Solution daps;
	std::cout << daps.gcdOfString(test, test1);
	return 0;
}