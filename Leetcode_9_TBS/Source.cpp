#include <iostream>

/*

Задача: Проверить является ли число палиндромом или нет. 121 Это палниндром, а -121 нет.

Решение:
Мы смотрим на число с зада наперед. То есть число 2348 для нас это 8432 и поэтому не палиндром.
А вот число 4224, если посмотреть с зада, то это 4224. То есть палиндром.
Получается такое решение. Отделяем от числа последню цифру, это последний разряд числа. Следовательно восстанавливаем последний разряд числа, но
можно это делать без десятков, то есть просто 4. Далее число делим на десять.И опять отделяем от числа последнюю цифру, получаем 2. Это уже 
предпоследний разряд числа. Добавляем к последнему разряду, умноженному на 10 число из предпоследнего разряда, то есть 4*10 + 2.
И дальше до бесконечности. Пока не восстановим полное число. В итоге просто сравниваем получившееся число, которое сгенерировали
методом отделений послений цифры исходного числа. И сравниваем входное число и итоговое.

*/

class Solution
{
public:
    bool isPalindrome(int Number)
    {
        int CopyNumber = Number;
        int NewNumber = 0;
        while (CopyNumber > 0)
        {
            NewNumber = NewNumber * 10 + CopyNumber % 10;
            CopyNumber /= 10;

        }
        return NewNumber == Number;
    }
};





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
/*
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
*/

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
	daps.isPalindrome(-121);

    std::cout << 200 % 10 << std::endl;
    return 0;
}