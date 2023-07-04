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

// after 10 min 7 / 4 / 2023 SUCCES!
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

int main()
{
	Solution daps;
	daps.isPalindrome(121);
}