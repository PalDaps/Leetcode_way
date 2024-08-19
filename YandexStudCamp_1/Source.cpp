#include <iostream>
#include <vector>
#include <unordered_map>
#include <fstream>

int MaxFrequenceElem(const std::vector<uint32_t>& vA)
{
	if (vA.size() == 1) return vA[0];
	uint32_t Result = 0;
	std::unordered_map<uint32_t, uint32_t> mFrequencies;
	for (const auto& Num : vA)
		mFrequencies[Num]++;
	std::pair<uint32_t, uint32_t> maxFrequence = { 0, 0 };
	for (const auto& pair : mFrequencies)
	{
		if (pair.second == maxFrequence.second)
		{
			if (pair.first > maxFrequence.first) maxFrequence = pair;
		}
		else if (pair.second > maxFrequence.second)
		{
			maxFrequence = pair;
		}
	}
	return maxFrequence.first;
}

int main()
{
	std::ifstream InputFile("input.txt");
	std::ofstream OutputFile("output.txt");
	if (!InputFile || !OutputFile)
	{
		std::cout << "ERROR" << std::endl;
	}
	size_t Size = 0;
	InputFile >> Size;

	std::vector<uint32_t> vA(Size);
	for (int i = 0; i < Size; ++i)
	{
		InputFile >> vA[i];
	}
	OutputFile << MaxFrequenceElem(vA) << std::endl;
	return 0;
}