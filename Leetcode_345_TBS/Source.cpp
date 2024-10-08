#include <iostream>

//class Solution {
//public:
//	std::string reverseVowels(std::string s) {
//		int i = 0, j = s.size() - 1;
//		while (i < j) {
//			i = s.find_first_of("aeiouAEIOU", i);
//			j = s.find_last_of("aeiouAEIOU", j);
//			if (i < j) std::swap(s[i++], s[j--]);
//		}
//		return s;
//	}
//};



// after 20 min 6/16/2023
// success
//class Solution {
//public:
//	std::string reversVowels(std::string s) {
//		/*int i = 0, j = s.size() - 1;
//		while (i < j) {
//			i = s.find_first_of("aeiouAEIOU", i);
//			j = s.find_last_of("aeiouAEIOU", j);
//			if (i < j) std::swap(s[i++], s[j--]);
//		}
//		return s;*/
//		int i = 0, j = s.size() - 1;
//		while (i < j) {
//			while (i < j && !isVowel(s[i])) i++;
//			while (i < j && !isVowel(s[j])) j--;
//			if (i < j) std::swap(s[i++], s[j--]);
//		}
//		return s;
//	}
//private:
//	bool isVowel(char c) {
//		return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' ||
//			c == 'E' || c == 'I' || c == 'O' || c == 'U';
//	}
//};

// 6/21/2023
// It went hard, I didn't remember
// FAIL!

// after 30 min
// success!
//class Solution {
//public:
//	std::string reverseVowels(std::string s) {
//		int i = 0, j = s.size() - 1;
//		while (i < j) {
//			/*i = s.find_first_of("aeiouAEIOU", i);
//			j = s.find_last_of("aeiouAEIOU", j);
//			if (i < j) std::swap(s[i++], s[j--]);*/
//			while (i < j && !isVowelIt(s[i])) i++;
//			while (i < j && !isVowelIt(s[j])) j--;
//			if (i < j) std::swap(s[i++], s[j--]);
//		}
//		return s;
//	}
//private:
//	bool isVowelIt(char c) {
//		return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
//			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
//	}
//};

// Success!
// success!! 6/24/2023

// 7 / 4 / 2023
// I remember both versions of the problem. The epic Success!! 


// 7 / 8 / 2023
// Two variant is success! 

// 7 / 12 / 2023 Two variant is success!

// 3 : 21 PM / 10
// 7 / 15 / 2023 / SUCCESS

//class Solution {
//public:
//    std::string reverseVowels(std::string s) {
//        int i = 0, j = s.size() - 1;
//        while (i < j) {
//            i = s.find_first_of("aeiouAEIOU", i);
//            j = s.find_last_of("aeiouAEIOU", j);
//            if (i < j) std::swap(s[i++], s[j--]);
//        }
//        return s;
//    }
//};

// 1 : 03 PM / 20
// 7 / 26 / 2023 / SUCCESS

// 15 : 02 PM
// 01 / 09 / 2023 / SUCCESS

/*
class Solution {
public:
	std::string reverseVowels(std::string s) {
		int i = 0, j = s.size() - 1;
		while (i < j) {
			while (i < j && !isVowel(s[i])) i++;
			while (i < j && !isVowel(s[j])) j--;
			if (i < j) std::swap(s[i++], s[j--]);
		}
		return s;
	}

	bool isVowel(char c) {
		return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
	}
};
*/

// 22 : 46 PM
// 24 / 08 / 2024 / Failure

class Solution
{
public:
    std::string reverseVowels(std::string S)
    {
        int i = 0, j = S.size() - 1;
        bool flag1 = false, flag2 = false;
        while (i <= j)
        {
            while (!isChar(S[i])) { i++; }
            while (!isChar(S[j])) { j--; }
            if (isChar(S[i]) && isChar(S[j]))
            {   
                if (i >= j) return S;
                std::swap(S[i], S[j]);
                i++;
                j--;
            }
        }
        return S;
    }

    bool isChar(char C)
    {
        return C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'u' ||
            C == 'A' || C == 'E' || C == 'I' || C == 'O' || C == 'U';
    }
};




int main() {
    Solution Daps;
    std::string Test1 = "hello";
    Daps.reverseVowels(Test1);
	return 0;
}