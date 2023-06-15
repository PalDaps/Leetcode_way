#include <iostream>

class Solution {
public:
	std::string reverseWords(std::string s) {
		int size = s.size();
		std::string result = "";
		int EndWord = size - 1;
		bool flag = false;
		/*for (int i = s.size() - 1; i >= 0; i--) {
			if (s[i] != ' ' && s[i + 1] == ' ') {
				EndWord = i;
			}
			if ((s[i] == ' ' || i == 0) && s[i + 1] != ' ') {
				if ( i == 0) {
					result += s.substr(0, EndWord+1);
					std::cout << s.substr(0, EndWord+1) << std::endl;
				}
				else {
					result += s.substr(i + 1, EndWord);
					std::cout << s.substr(i + 1, EndWord) << std::endl;
					result.push_back(' ');
				}
			}
		}*/
		for (int i = size - 1; i >= 0; i--) {
			if (s[i] == ' ' && !flag) {
				// std::cout << i << std::endl;
				flag = true;
			}
			if (s[i] != ' ' && flag) {
				std::cout << i << std::endl;
				flag = false;
			}
		}
		return result;
	}

};

int main() {
	std::string test1 = " hello  world ";
	std::string test2 = "A B";
	std::string res = "";
	std::string dob = test1.substr(6, test1.size()-1);
	res += dob;
	// std::cout << res;
	Solution daps;
	std::cout << daps.reverseWords(test1);
	return 0;
}