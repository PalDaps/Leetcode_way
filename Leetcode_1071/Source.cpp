#include <iostream>
#include <string>

class Solution {
public:
	std::string gcdOfString(std::string str1, std::string str2) {
		std::string substring = "";
		std::string result = "";
		std::string result_two = "";
		std::string result_three = "";
		bool one_char = false;
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
		if (str1.size() == 1 && str1[0] == str2[0])
			return str1;
		if (substring == "") return "";
		std::string temp_substring = "";
		std::string smallest_substring = substring;
		bool flag_new = false;
		for (int i = 0; result.size() < str1.size(); i++) {
			std::string temp = substring + smallest_substring;
			for (int j = 0; result.size() < str1.size(); j++) {
				result = result + temp;
				if (result == str1) {
					if (temp.size() > substring.size()) {
						result = "";
						substring = temp;
						for (int k = 0; result.size() < str2.size(); k++) {
							result = result + substring;
							if (result == str2) {
								temp_substring = substring;
								flag_new = true;
							}
						}
						// if (flag_new) substring = temp;
						result = "";
					}
				}
				if (substring == temp)
					break;
			}
		}
		result = "";
		int counter_str1 = 0;
		int counter_str2 = 0;
		for (int i = 1; i < str1.size(); i++) {
			if (str1[i - 1] == str1[i]) {
				counter_str1++;
			}
		}
		for (int i = 1; i < str2.size(); i++) {
			if (str2[i - 1] == str2[i]) {
				counter_str2++;
			}
		}
		if (counter_str1 + 1 == str1.size() && counter_str2 + 1== str2.size())
			one_char = true;
		if (one_char && str1 == str2) {
			return str1;
		}
		if (!flag_new || str1.size() == str2.size()) {
			substring = smallest_substring;
			result = "";
		}
		if (flag_new && str1 != str2 && !one_char) return temp_substring;
		if (one_char && str1 == str2 && str1.size()%2 == 0) {
			for (int i = 0; i < str1.size() / 2; i++) {
				result = result + smallest_substring;
			}
			return result;
		}
		if (one_char) {
			int ost = 1;
			counter_str1 = counter_str1 + 1;
			counter_str2 = counter_str2 + 1;
			if (counter_str2 < counter_str1)
				std::swap(counter_str2, counter_str1);
			while (ost != 0) {
				ost = counter_str2 % counter_str1;
				counter_str2 = counter_str1;
				counter_str1 = ost;
			}
			for (int i = 0; i < counter_str2; i++) {
				result = result + smallest_substring;
			}
			return result;
		}
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
	std::string test = "A";
	std::string test1 = "AA";
	std::string t_test = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	std::string t_test1 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	Solution daps;
	int a = 360;
	int b = 640;
	int ost = 1;
	while (ost != 0) {
		ost = b % a;	
		b = a;
		a = ost;
	}
	// std::cout << b; 
	std::cout << daps.gcdOfString(test, test1);
	return 0;
}