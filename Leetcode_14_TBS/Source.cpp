#include <iostream>
#include <vector>
#include <algorithm>

//class Solution
//{
//public:
//	std::string longestCommonPrefix(std::vector<std::string>& strs)
//	{
//		std::string finish = "";
//		std::sort(strs.begin(), strs.end());
//		int size_strs = strs.size();
//		std::string first = strs[0], last = strs[size_strs - 1];
//		for (int i = 0; i < std::min(first.size(), last.size()); i++)
//		{
//			if (first[i] != last[i])
//			{
//				return finish;
//			}
//			finish = finish + first[i];
//		}
//		return finish;
//	}
//};

// the first repetition of the problem 7 / 6 /2023

//class Solution {
//public:
//    std::string longestCommonPrefix(std::vector<std::string>& strs) {
//        std::sort(strs.begin(), strs.end());
//        std::string first = strs[0];
//        std::string last = strs[strs.size() - 1];
//        std::string result = "";
//        for (int i = 0; i < std::min(first.size(), last.size()); i++) {
//            if (first[i] == last[i]) {
//                result = result + first[i];
//            }
//            else break;
//        }
//        return result;
//    }
//};


// 7 / 7 / 2023 SUCCES!

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::sort(strs.begin(), strs.end());
        std::string first = strs[0];
        std::string last = strs[strs.size() - 1];
        std::string res = "";
        for (int i = 0; i < std::min(first.size(), last.size()); i++) {
            if (first[i] == last[i])
                res += first[i];
            else break;
        }
        return res;
    }
};

int main()
{
	std::vector<std::string> user = { "flow", "flex", "flexible"};
	Solution daps;
	std::cout << daps.longestCommonPrefix(user);
	return 0;
}