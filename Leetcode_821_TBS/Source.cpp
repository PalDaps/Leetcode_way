#include <iostream>
#include <vector>

class Solution
{
public:
	std::vector<int> shortestToChar(std::string String, char Char)
	{
		int Size = String.size();
		int Position = -Size;
		std::vector<int> Result(Size, Size);

		for (int i = 0; i < Size; i++)
		{
			if (String[i] == Char) Position = i;
			Result[i] = i - Position;
		}

		for (int i = Position - 1; i >= 0; i--)
		{
			if (String[i] == Char) Position = i;
			Result[i] = std::min(Result[i], Position - i);
		}
		return Result;
	}
};

// C language
int* shortestToChar(char* String, char Char, int* returnSize)
{
	*returnSize = strlen(String);
	int Position = -(*returnSize);
	int* pResult = (int*)malloc(*returnSize * sizeof(int));
	for (int i = 0; i < *returnSize; i++)
	{
		if (String[i] == Char) Position = i;
		pResult[i] = i - Position;
	}

	for (int i = Position - 1; i >= 0; i--)
	{
		if (String[i] == Char) Position = i;
		int Min = pResult[i] > (Position - i) ? (Position - i) : pResult[i];
		pResult[i] = Min;
	}
	return pResult;
}

// 20 : 25 PM / after a 15 minute
// 04 / 01 / 2024 / SUCCESS

int main()
{
	int a = 5;
	int* b = &a;
	char s[] = "loveleetcode";
	shortestToChar(s, 'e', b);
	std::string Test1 = "loveleetcode";
	std::string Test2 = "baaa";
	Solution daps;
	daps.shortestToChar(Test1, 'e');
	return 0;
}