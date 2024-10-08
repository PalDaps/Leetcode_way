#include <iostream>
#include <vector>


// The solution is different from mine, but it is much more compact and faster than mine.
//class Solution {
//public:
//    std::string reverseWords(std::string s) {
//        reverse(s.begin(), s.end());
//        int l = 0, r = 0, i = 0, n = s.size();
//        while (i < n) {
//            while (i < n && s[i] != ' ')
//                s[r++] = s[i++];
//
//            if (l < r) { // if we can find a non-empty word then
//                reverse(s.begin() + l, s.begin() + r); // reverse current word
//                if (r == n) break;
//                s[r++] = ' '; // set empty space
//                l = r;
//            }
//            ++i; // now i == n or s[i] == ' ', so we skip that character!
//        }
//        if (r > 0 && s[r - 1] == ' ') --r; // skip last empty character if have
//        s.resize(r);
//        return s;
//    }
//};

// after 2 min
// I want to try to reproduce this solution after I went 
// through the debugger and memorized some key points and code.
//

// I hope I remembered something.
//class Solution {
//public:
//    std::string reverseWords(std::string s) {
//        std::reverse(s.begin(), s.end());
//        int i = 0; // ������� ������� usual counter
//        int n = s.size();
//        int r = 0; // ��� ���� ������� ��� ����, ����� �������������� �������
//        int l = 0; // ��������� ������� �����
//        while (i < n) {
//            while (i < n && s[i] != ' ') {
//                s[r++] = s[i++];
//            }
//            if (l < r) {
//                reverse(s.begin() + l, s.begin() + r);
//                if (r == n) break;
//                s[r++] = ' ';
//                l = r;
//            }
//            i++;
//        }
//        if (r > 0 && s[r - 1] == ' ') r--;
//        s.resize(r);
//        return s;
//    }
//};

// 6/21/2023
// I tried to run through the code with my eyes and understand what 
// the essence of the algorithm was and then immediately reproduced 
// a good version, but of course I didn't remember right away.
// FAILURE!
//class Solution {
//public:
//    std::string reverseWords(std::string s) {
//        std::reverse(s.begin(), s.end());
//        int i = 0, n = s.size();
//        int l = 0, r = 0;
//        while (i < n) {
//            while (s[i] != ' ' && i < n) {
//                s[r++] = s[i++];
//            }
//            if (l < r) {
//                reverse(s.begin() + l, s.begin() + r);
//                if (r == n) break;
//                s[r++] = ' ';
//                l = r;
//            }
//            i++;
//        }
//        if (r > 0 && s[r - 1] == ' ') r--;
//        s.resize(r);
//        return s;
//    }
//};

// success !! /6/21/2023!!!!

// success !! 7 / 4 / 2023!;
//class Solution {
//public:
//    std::string reverseWords(std::string s) {
//        std::reverse(s.begin(), s.end());
//        int i = 0, n = s.size();
//        int r = 0, l = 0;
//        while (i < n) {
//            while (i < n && s[i] != ' ') {
//                s[r++] = s[i++];
//            }
//            if (l < r) {
//                std::reverse(s.begin() + l, s.begin() + r);
//                if (r == n) break;
//                s[r++] = ' ';
//                l = r;
//            }
//            i++;
//        }
//        if (r > 0 && s[r - 1] == ' ') r--;
//        s.resize(r);
//        return s;
//    }
//    std::string reverseWordsWithMine(std::string s) {
//        reverseMine(s, 0, s.size() - 1);
//        int i = 0, r = 0, l = 0;
//        while (i < s.size()) {
//            while (i < s.size() && s[i] != ' ') {
//                s[r++] = s[i++];
//            }
//            if (l < r) {
//                reverseMine(s, l, r-1);
//                if (r == s.size()) return s;
//                s[r++] = ' ';
//                l = r;
//            }
//            i++;
//        }
//        if (r > 0 && s[r - 1] == ' ') r--;
//        s.resize(r);
//        return s;
//    }
//    void reverseMine(std::string& s, int i_begin, int i_end) {
//        while (i_begin < i_end) {
//            char temp = s[i_begin];
//            s[i_begin] = s[i_end];
//            s[i_end] = temp;
//            i_begin++;
//            i_end--;
//        }
//    }
//    void reverseMineS(std::string s, int index_start, int index_end) {
//        while (index_start < index_end) {
//            char temp = s[index_start];
//            s[index_start] = s[index_end];
//            s[index_end] = temp;
//            index_start++;
//            index_end--;
//        }
//        // std::cout << s;
//    }
//};

// SUCCESS! 7 / 8 / 2023

// 7 / 12 / 2023 SUCCEsS! But it I don't remember well 
// if (r > 0 && s[r - 1] == ' ') r--;


// 3 : 40 PM / 11
// 7 / 15 / 2023 / SUCCESS

// 12 : 15 PM
// 7 / 24 / 2023 / SUCCESS

// 10 : 18 AM / 7
// 7 / 26 / 2023 / SUCCESS

// 12 : 08 PM / after a two week
// 8 / 6 / 2023 / SUCCESS

// 23 : 21 PM
// 27 / 08 / 2023 / SUCCESS

// 0 : 51 PM
// 25 / 08 / 2024 / SUCCESS

/*
class Solution {
public:
    std::string reverseWords(std::string str) {
        reverseMine(str, 0, str.size() - 1);
        int n = str.size(), l = 0, r = 0, i = 0;
        while (i < n) {
            while (i < n && str[i] != ' ') {
                str[r++] = str[i++];
            }
            if (l < r) {
                reverseMine(str, l, r-1);
                if (r == n) return str;
                str[r++] = ' ';
                l = r;
            }
            i++;
        }
        if (r > 0 && str[r - 1] == ' ') r--;
        str.resize(r);
        return str;
    }

    void reverseMine(std::string& str, int begin, int end) {
        while (begin < end) {
            char temp = str[begin];
            str[begin] = str[end];
            str[end] = temp;
            begin++;
            end--;
        }
    }
};
*/


// ���� ����������� ������
// �������������� ����� � ������
// ������� ������� � ������, � �����, � ��������.
// 


/*
class Solution {
public:
    std::string reverseWords(std::string S)
    {
        reverseString(S, 0, S.size());
        std::string Result;
        size_t i = 0, l = 0;
        while (i < S.size())
        {
            while (S[l] != ' ' && l != S.size())
            {
                l++;
            }
            if (i < l && i < S.size())
            {
                reverseString(S, i, l);
                size_t k = i;
                while (k < l + 1 && k < S.size())
                {
                    Result.push_back(S[k]);
                    k++;
                }
            }
            l++;
            i = l;
        }
        if (Result[Result.size() - 1] == ' ') Result.resize(Result.size() - 1);
        return Result;
    }

    void reverseString(std::string& String, size_t Begin, size_t End)
    {
        size_t i = Begin, j = End - 1;
        while (i < j)
        {
            if (i < j)
            {
                std::swap(String[i], String[j]);
                i++;
                j--;
            }
        }
    }
};
*/


int main() {
    std::vector<int> Anime();
    // std::string test1 = "hello world";
    // Solution daps;
    // std::cout << daps.reverseWords(test1);
	// std::cout << "HELLO!";
    // daps.reverseWordsWithMine(test1);
  
	return 0;
}

