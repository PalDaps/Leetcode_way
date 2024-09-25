#include <iostream>
#include <vector>
#include <string>

/*
Суть проблемы. Есть массив с последовательно повторяющимися символами. Нужно вернуть сжатый массив в виде:
сначала повторяющийся символ, потом количество повоторяющихся символов в char типе. Двухзначные числа состоят из двух char
символов.

Идея: Идти по массиву, считать повторяющийся символ. И последовательно записывать символ и длину в новый массив. 
Проблема с конвернтацией int в char. Например int = 43 нужно преобразовать в char[] Array = {'4', '3'};
*/

//class Solution {
//public:
//	int compress(std::vector<char>& chars) {
//		int indexAns = 0, index = 0;
//		while (index < chars.size()) {
//			char currentChar = chars[index];
//			int count = 0;
//			while (index < chars.size() && chars[index] == currentChar) {
//				index++;
//				count++;
//			}
//			chars[indexAns++] = currentChar;
//			if (count != 1) {
//				std::string s = std::to_string(count);
//				for (auto i : s)
//					chars[indexAns++] = i;
//			}
//		}
//		return indexAns;
//	}
//};

// need after 15 min repeat this nice solution

// SUCCESS!But it went hard.

// after a 5 hour 7 / 8 / 2023 SUCCESS!

// 7 / 12 / 2023 The failure!

// 7 / 12 / 2023 The SUCcesS!

// 4 : 12 PM / 13
// 7 / 15 / 2023 / SUCCESS!

// 12 : 30 PM
// 7 / 24 / 2023 / SUCCESS
// but i forgot '++' in chars[iRes++] = tempChar;

// 1 : 37 PM / 23
// 7 / 26 / 2023 / SUCCESS

// 11 : 38 PM / after a two week
// 8 / 5 / 2023 / SUCCESS

// 23 : 41 PM
// 27 / 08 / 2023 / SUCCESS

/*
class Solution {
public:
	int compress(std::vector<char>& chars) {
		int iRes = 0, i = 0;
		while (i < chars.size()) {
			char tempChar = chars[i];
			int c = 0;
			while (i < chars.size() && chars[i] == tempChar) {
				i++;
				c++;
			}
			chars[iRes++] = tempChar;
			if (c > 1) {
				std::string s = std::to_string(c);
				for (auto a : s)
					chars[iRes++] = a;
			}

		}
		return iRes;
	}
};
*/


class Solution {
public:
    int compress(std::vector<char>& Chars)
    {
        size_t Size = Chars.size(), WriteIndex = 0, LengthSequen = 0;
        char Char = Chars[0];

        for (size_t i = 0; i < Size; ++i)
        {
            if (Chars[i] != Char)
            {
                WriteInChars(Chars, Char, WriteIndex, LengthSequen);
                Char = Chars[i];
                LengthSequen = 1;
            }
            else LengthSequen++;
        }
        WriteInChars(Chars, Char, WriteIndex, LengthSequen);
        return WriteIndex;
    }
    void WriteInChars(std::vector<char>& Array, char Symbol,
        size_t& StartIndex, size_t Length)
    {
        Array[StartIndex++] = Symbol;
        if (Length > 1)
        {
            std::string CounterString = std::to_string(Length);
            size_t SizeString = CounterString.size();
            for (size_t k = 0; k < SizeString; ++k)
                Array[StartIndex++] = CounterString[k];
        }
    }
};
 
int main() {
    Solution Daps;
    std::vector<char> Array = {'a', 'b', 'b', 'b', 'b', 'b', 'b' , 'b', 'b', 'b' , 'b', 'b', 'b' };
    Daps.compress(Array);
	return 100;
}