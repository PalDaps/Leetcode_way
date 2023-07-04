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
//        int i = 0; // обычный счетчик usual counter
//        int n = s.size();
//        int r = 0; // еще один счетчик для того, чтобы компенсировать пробелы
//        int l = 0; // начальная позиция слова
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

// succes !! /6/21/2023!!!!

// succes !! 7 / 4 / 2023!;
class Solution {
public:
    std::string reverseWords(std::string s) {
        std::reverse(s.begin(), s.end());
        int i = 0, n = s.size();
        int r = 0, l = 0;
        while (i < n) {
            while (i < n && s[i] != ' ') {
                s[r++] = s[i++];
            }
            if (l < r) {
                std::reverse(s.begin() + l, s.begin() + r);
                if (r == n) break;
                s[r++] = ' ';
                l = r;
            }
            i++;
        }
        if (r > 0 && s[r - 1] == ' ') r--;
        s.resize(r);
        return s;
    }
};

int main() {
    std::string test1 = " hello world ";
    Solution daps;
    daps.reverseWords(test1);
	// std::cout << "HELLO!";
	return 0;
}

