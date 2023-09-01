#include <iostream>

//class Solution
//{
//public:
//	bool isPalindrom(int x)
//	{
//		if (x < 0 || x != 0 && x % 10 == 0) return false;
//		int check = 0;
//		while (x > check)
//		{
//			check = check * 10 + x % 10;
//			x /= 10;
//		}
//		return (x == check || x == check/10);
//	}
//};

// more nice solution i need to remember it nice

//class Solution {
//public:
//	bool isPalindrome(int x) {
//		int temp = x;
//		unsigned int sum = 0;
//		while (temp > 0) {
//			sum = sum * 10 + temp % 10;
//			temp /= 10;
//		}
//		return temp == x;
//	}
//};

// after 10 min 7 / 4 / 2023 SUCCESS!
//class Solution {
//public:
//    bool isPalindrome(int x) {
//        int temp = x;
//        unsigned int sum = 0;
//        while (temp > 0) {
//            sum = sum * 10 + temp % 10;
//            temp /= 10;
//        }
//        return sum == x;
//    }
//};


// after 30 minut remember. SUCCESs!! 7 / 4 /2023;
//class Solution {
//public:
//    bool isPalindrome(int x) {
//        int temp = x;
//        unsigned int sum = 0;
//        while (temp > 0) {
//            sum = sum * 10 + temp % 10;
//            temp /= 10;
//        }
//        return sum == x;
//    }
//};


// after a day 7 / 5 / 2023 SUCCESS!
//class Solution {
//public:
//    bool isPalindrome(int x) {
//        int temp = x;
//        unsigned int sum = 0;
//        while (temp > 0) {
//            sum = sum * 10 + temp % 10;
//            temp /= 10;
//        }
//        return sum == x;
//    }
//};

// SUCCESS! 7 / 7 / 2023
class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        unsigned int sum = 0;
        while (temp > 0) {
            sum = sum * 10 + temp % 10;
            temp /= 10;
        }
        return sum == x;
    }
};

// SUCCESS! 7 / 9 / 2023

// 7 / 12 / 2023 SUCCESS!

// 4 : 20 PM / 15
// 7 / 15 / 2023 / SUCCESS

// 12 : 33 PM / 26
// 7 / 27 / 2023 / SUCCESS

// 15 : 09 PM
// 01 / 09 / 2023 / SUCCESS
int main()
{
	Solution daps;
	daps.isPalindrome(121);
}