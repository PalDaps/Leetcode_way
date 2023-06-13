#include <iostream>

class Solution {
public:
	std::string reverseVowels(std::string s) {
		int safe_i = 0, safe_j = 0;
		bool flag_i = false;
		bool flag_j = false;
		for (int i = 0, j = s.size()-1; i < j; i++, j--) {
			if (!flag_j) {
				switch (s[i]) {
				case 'a':
					safe_i = i;
					flag_i = true;
					break;
				case 'A':
					safe_i = i;
					flag_i = true;
					break;
				case 'e':
					safe_i = i;
					flag_i = true;
					break;
				case 'E':
					safe_i = i;
					flag_i = true;
					break;
				case 'i':
					safe_i = i;
					flag_i = true;
					break;
				case 'I':
					safe_i = i;
					flag_i = true;
					break;
				case 'o':
					safe_i = i;
					flag_i = true;
					break;
				case 'O':
					safe_i = i;
					flag_i = true;
					break;
				case 'u':
					safe_i = i;
					flag_i = true;
					break;
				case 'U':
					safe_i = i;
					flag_i = true;
					break;
				default:
					flag_i = false;
					break;
				}
			}
			if (flag_i) {
				switch (s[j]) {
				case 'a':
					safe_j = j;
					flag_j = true;
					break;
				case 'A':
					safe_j = j;
					flag_j = true;
					break;
				case 'e':
					safe_j = j;
					flag_j = true;
					break;
				case 'E':
					safe_j = j;
					flag_j = true;
					break;
				case 'i':
					safe_j = j;
					flag_j = true;
					break;
				case 'I':
					safe_j = j;
					flag_j = true;
					break;;
				case 'o':
					safe_j = j;
					flag_j = true;
					break;
				case 'O':
					safe_j = j;
					flag_j = true;
					break;
				case 'u':
					safe_j = j;
					flag_j = true;
					break;
				case 'U':
					safe_j = j;
					flag_j = true;
					break;
				default:
					flag_j = false;
					break;
				}
			}
			if (!flag_i && !flag_j) j++;
			if (flag_i && !flag_j) i--;
			if (flag_i && flag_j) {
				std::swap(s[safe_i], s[safe_j]);
				flag_j = false;
				flag_i = false;
			}
		}
		return s;
	}
};

int main() {
	Solution daps;
	std::string test = "hello";
	std::cout << daps.reverseVowels(test);
	return 0;
}