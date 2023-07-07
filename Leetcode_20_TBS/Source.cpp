#include <iostream>
#include <stack>


// the nice solution i think
//class Solution {
//public:
//	bool isValid(std::string s) {
//		std::stack<char> st;
//		for (auto i : s) {
//			if (i == '(')
//				st.push(')');
//			else if (i == '{')
//				st.push('}');
//			else if (i == '[')
//				st.push(']');
//			else if (st.empty() || st.top() != i)
//				return false;
//			else if (!st.empty() && st.top() == i)
//				st.pop();
//		}
//		return st.empty();
//	}
//};


// 7 / 7 / 2023 Almost remembered
// Tha failure
class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;
        for (auto i : s) {
            if (i == '(')
                st.push(')');
            else if (i == '{')
                st.push('}');
            else if (i == '[')
                st.push(']');
            else if (st.empty() || st.top() != i)
                return false;
            else if (!st.empty() && i == st.top())
                st.pop();
        }
        return st.empty();
    }
};

int main() {
	Solution daps;
	std::string test = "()[]{}";
	std::cout << daps.isValid(test);
	return 0;
}