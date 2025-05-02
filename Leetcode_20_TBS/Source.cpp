#include <iostream>
#include <stack>

/*
20:56
02.05.2025
Задача: дается массив скобок. Нужно проверить, что соответсвует правилам. Вот таким правилам {([])}
Идея: использовать стек. Идем по всему массиву. Если встречаем открытую скобку, то
добавляют такую же закрывающую в стек. Как только находит закрывающую скобку, то она
должна быть той закрывающей скобкой, которая лежит на топе стека.

*/

/*
class Solution
{
public:
    bool isValid(string s)
    {
        std::stack<char> Stack;
        for(size_t i = 0; i < s.size(); i++)
        {
            char Bracket = s[i];
            switch (Bracket)
            {
                case '(':
                {
                    Stack.push(')');
                    break;
                }
                case '[':
                {
                    Stack.push(']');
                    break;
                }
                case '{':
                {
                    Stack.push('}');
                    break;
                }
                case ')':
                {
                    if (!Stack.empty())
                    {
                        if (Stack.top() == ')')
                            Stack.pop();
                        else return 0;
                    }
                    else return 0;
                    break;
                }
                case ']':
                {
                    if (!Stack.empty())
                    {
                        if (Stack.top() == ']')
                            Stack.pop();
                        else return 0;
                    }
                    else return 0;
                    break;
                }
                case '}':
                {
                    if (!Stack.empty())
                    {
                        if (Stack.top() == '}')
                            Stack.pop();
                        else return 0;
                    }
                    else return 0;
                    break;
                }
            }

        }
        return Stack.empty();
    }
};

*/


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
//class Solution {
//public:
//    bool isValid(std::string s) {
//        std::stack<char> st;
//        for (auto i : s) {
//            if (i == '(')
//                st.push(')');
//            else if (i == '{')
//                st.push('}');
//            else if (i == '[')
//                st.push(']');
//            else if (st.empty() || st.top() != i)
//                return false;
//            else if (!st.empty() && i == st.top())
//                st.pop();
//        }
//        return st.empty();
//    }
//};

// 7 / 10 / 2023 The failure. else if (st.empty() || st.top() != i)
// return false;


// 7 / 12 / 2023
// success

// 4 : 40 PM / 18
// 7 / 15 / 2023 / SUCCESS

// 11 : 17 AM / 12
// 7 / 26 / 2023 / SUCCESS
// Have the little problem, but i process when i will solve it, i think that
// i will found this mistake

// 15 : 59 PM
// 03 / 09 / 2023 / SUCCESS

// 19 : 46 PM
// 04 / 09 / 2023 / SUCCESS

// 21 : 04 PM
// 02 / 05 / 2025 / SUCCESS



class Solution {
public:
    bool isValid(std::string s) {
		std::stack<char> st;
		for (auto i : s) {
			if (i == '{')
				st.push('}');
			else if (i == '[')
				st.push(']');
			else if (i == '(')
				st.push(')');
			else if (st.empty() || st.top() != i)
				return false;
			else if (!st.empty() && st.top() == i)
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