#include <iostream>
#include <vector>

class Solution {
public:
	std::string reverseWords(std::string s) {
		int size = s.size();
		std::string result = "";
		int EndWord = size - 1;
		bool flag = false;
		int counter_of_void = 0;
		int counter_of_symb = 0;
		for (int i = s.size() - 1; i >= 0; i--) {
			if (s[i] == ' ') {
				counter_of_void++;
				counter_of_symb = 0;
			}
			if (s[i] != ' ') {
				counter_of_symb++;
				EndWord = counter_of_symb;
			}
			/*if (s[i] != ' ' && s[i + 1] == ' ') {
				EndWord = i;
			}*/
			if ((s[i] == ' ' || i == 0) && s[i + 1] != ' ') {
				if ( i == 0 && s[i] != ' ') {
					std::string temp = s.substr(0, EndWord);
					if (temp != "") result += temp;
					std::cout << s.substr(0, EndWord+1) << std::endl;
				}
				else {
					std::string temp = s.substr(i + 1, EndWord);
					if (temp == "") EndWord--;
					if (temp != "") {
						result += temp;
						if (s[i-1] == ' ') result.push_back(' ');
					}
					std::cout << s.substr(i + 1, EndWord) << std::endl;
					
				}
			}
		}
		if (result[result.size() - 1] == ' ')
			result.pop_back();
		//for (int i = size - 1; i >= 0; i--) {
		//	if (s[i] == ' ' && !flag) {
		//		// std::cout << i << std::endl;
		//		flag = true;
		//	}
		//	if (s[i] != ' ' && flag) {
		//		std::cout << i << std::endl;
		//		flag = false;
		//	}
		//}
		/*std::vector<int> ixes;
		for (int i = 0; i < size; i++) {
			if (s[i] != ' ') {
				ixes.push_back(i);
			}
			else {
			}
		}
		for (auto i : ixes)
			std::cout << i << " ";
		std::cout << std::endl;*/
		return result;
	}

};

int main() {
	std::string test1 = "      ";
	std::string test2 = "A B";
	std::string res = "";
	std::string dob = test1.substr(6, test1.size()-1);
	res += dob;
	// std::cout << res << std::endl;
	// std::cout << res.size() << std::endl;
	Solution daps;
	std::cout << daps.reverseWords(test1);
	return 0;
}