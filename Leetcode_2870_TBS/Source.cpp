#include <iostream>
#include <vector>
#include <unordered_map>

/*
Задача:
Есть массив с различными числами. Нужно найти минимальное число операций для опустошения массива.
Операции есть двух типов:
1) Удалить 2 числа с одинаковым значением.
1) Удалить 3 числа с одинаковым значением.

Решение:
1. Заводим хэш-таблицу для того, чтобы отследить частоту каждого числа.
2. Если какое-либо личсло повторяется один раз возвращаем -1.
3. Смотрим сколько максимум умещается троек в каждом числе. И прибавляем этот результат к числу операций.
4. Если троек не хватает, значит прибавляем одну операцию к рузльтирующему числу.

*/


class Solution
{
public:
	int minOperations(std::vector<int>& Nums)
	{
		std::unordered_map<int, int> Map;
		for (auto i : Nums)
		{
			Map[i]++;
		}
		int Result = 0;
		for (auto i : Map)
		{
			int Temp = i.second;
			if (Temp == 1) return -1;
			Result += Temp / 3;
			if (Temp % 3) Result++;
		}
		return Result;
	}
};

// 17 : 50 PM / after an 1 day 
// 04 / 01 / 2024 / SUCCESS

// 12 : 38 PM / after a 5 days
// 09 / 01 / 2024 / Failure
// Вообще забыл алгоритм решения и код, который писал раннее.
// Но все же непонятно как работают эти две строчки.
/*
Result += Freq / 3;
if (Freq % 3) Result++;

Сделаем пару тестов.
[ 3, 3 ]

[ 3 ] -> 2

2/3 == 0
2%3 = 2 -> Result++;

Не понятно почему это применимо для каждой частоты?

*/

class Solution
{
public:
	int minOperations(std::vector<int> Nums)
	{
		std::unordered_map<int, int> Map;
		int Result = 0;
		for (auto i : Nums) Map[i]++;
		for (auto i : Map)
		{
			int Freq = i.second;
			if (Freq == 1) return -1;
			Result += Freq / 3;
			if (Freq % 3) Result++; // Почему именно одна операция
		}	
	}
};

int main()
{
	std::vector<int> Test3 = { 14, 12, 14, 14, 12, 14, 14, 12, 12, 12, 12, 14, 14, 12, 14, 14, 14, 12, 12 };
	Solution daps;
	daps.minOperations(Test3);
	return 0;
}