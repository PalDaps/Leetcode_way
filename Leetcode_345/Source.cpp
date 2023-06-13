#include <iostream>

class Solution {
public:
	std::string reverseVowels(std::string s) {
		int prev = 1, now = 0;
		for (int i = 0; i < s.size(); i++) {
			switch (s[i]) {
			case 'a':
				prev = i;
				now = i;
				break;
			case 'A':
				prev = i;
				now = i;
				break;
			case 'e':
				prev = i;
				now = i;
				break;
			case 'E':
				prev = i;
				now = i;
				break;
			case 'i':
				prev = i;
				now = i;
				break;
			case 'I':
				prev = i;
				now = i;
				break;
			case 'o':
				prev = i;
				now = i;
				break;
			case 'O':
				prev = i;
				now = i;
				break;
			case 'u':
				prev = i;
				now = i;
				break;
			case 'U':
				prev = i;
				now = i;
				break;
			default:
				break;
			}
			if (prev == now) break;
		}
		for (int i = 0; i < s.size(); i++) {
			switch (s[i]) {
				case 'a':
					prev = i;
					if (now != prev) std::swap(s[prev], s[now]);
					now = i;
					break;
				case 'A':
					prev = i;
					if (now != prev) std::swap(s[prev], s[now]);
					now = i;
					break;
				case 'e':
					prev = i;
					if (now != prev) std::swap(s[prev], s[now]);
					now = i;
					break;
				case 'E':
					prev = i;
					if (now != prev) std::swap(s[prev], s[now]);
					now = i;
					break;
				case 'i':
					prev = i;
					if (now != prev) std::swap(s[prev], s[now]);
					now = i;
					break;
				case 'I':
					prev = i;
					if (now != prev) std::swap(s[prev], s[now]);
					now = i;
					break;
				case 'o':
					prev = i;
					if (now != prev) std::swap(s[prev], s[now]);
					now = i;
					break;
				case 'O':
					prev = i;
					if (now != prev) std::swap(s[prev], s[now]);
					now = i;
					break;
				case 'u':
					prev = i;
					if (now != prev) std::swap(s[prev], s[now]);
					now = i;
					break;
				case 'U':
					prev = i;
					if (now != prev) std::swap(s[prev], s[now]);
					now = i;
					break;
				default:
					break;
			}
		}
		return s;
	}
};

int main() {
	Solution daps;
	std::string test = "Aa";
	std::cout << daps.reverseVowels(test);
	return 0;
}