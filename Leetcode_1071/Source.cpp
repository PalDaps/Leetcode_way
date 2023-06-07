#include <iostream>
#include <string>

class Solution {
public:
	std::string gcdOfString(std::string str1, std::string str2) {
		std::string substring = "";
		std::string result = "";
		std::string result_two = "";
		std::string result_three = "";
		bool flag = 0;
		for (int i = 1; i < str1.size(); i++) {
			std::string temp = "";
			temp = str1.substr(0, i);
			for (int j = 0; j < str1.size()-i+1 || substring.size()<str1.size(); j++) {
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
		if (substring == "") return "";
		for (int i = 0; i < std::min(substring.size(), str2.size()); i++) {
			if (substring[i] == str2[i])
				result.push_back(substring[i]);
			else
				break;
		}
		for (int i = 0; result_two.size() < str1.size(); i++) {
			result_two = result_two + str2;
			if (result_two == str1)
				return str2;
		}
		for (int i = 0; result_three.size() < str2.size(); i++) {
			result_three = result_three + substring;
		}
		if (result_three != str2)
			return "";
		return result;
	}
};

int main() {
	std::string test = "AAAAAAAAA";
	std::string test1 = "AAACCC";
	Solution daps;
	std::cout << daps.gcdOfString(test, test1);
	return 0;
}