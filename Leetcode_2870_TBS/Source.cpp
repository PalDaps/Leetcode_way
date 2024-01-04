#include <iostream>
#include <vector>
#include <unordered_map>

/*

Решение:
1. Заводим хэш-таблицу для того, чтобы отследить частоту каждого числа.
2. Если какое-либо личсло повторяется один раз возвращаем -1.
3. Вычисляем количество ходов, необходимых для того, чтобы все вхождения каждого числа были 
кратны 3. Если остаются вхождения (не кратные 3), он добавляет еще один ход для каждого такого вхождения.


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

int main()
{
	std::vector<int> Test3 = { 14, 12, 14, 14, 12, 14, 14, 12, 12, 12, 12, 14, 14, 12, 14, 14, 14, 12, 12 };
	Solution daps;
	daps.minOperations(Test3);
	return 0;
}