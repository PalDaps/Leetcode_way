#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>

// TL

//std::vector<std::pair<uint32_t, uint32_t>> PalindromeStrings(const std::vector<std::string>& Strings)
//{
//	std::vector<std::pair<uint32_t, uint32_t>> Palindrome;
//	for (size_t i = 0; i < Strings.size(); ++i)
//	{
//		for (size_t j = 0; j < Strings.size(); ++j)
//		{
//			if (i != j)
//			{
//				std::string First = Strings[i];
//				std::string Second = Strings[j];
//				std::string nrPalindrome = First + Second;
//				std::reverse(First.begin(), First.end());
//				std::reverse(Second.begin(), Second.end());
//				std::string rPalindrome = Second + First;
//				if (nrPalindrome == rPalindrome)
//				{
//					Palindrome.push_back({ i + 1, j + 1 });
//				}
//			}
//		}
//	}
//	return Palindrome;
//}

bool isPalindrome(const std::string& word) {
    int left = 0, right = word.length() - 1;
    while (left < right) {
        if (word[left++] != word[right--]) {
            return false;
        }
    }
    return true;
}

std::multimap<int, int> palindromePair(const std::vector<std::string>& strings) 
{
    std::unordered_map<std::string, int> palindromes;
    for (int i = 0; i < strings.size(); ++i)
    {
        palindromes[strings[i]] = i + 1;
    }
    std::multimap<int, int> result;
    for (int i = 0; i < strings.size(); ++i) 
    {
        std::string word = strings[i];
        for (int j = 0; j < word.length(); ++j) 
        {
            std::string prefix = word.substr(0, j);
            std::string suffix = word.substr(j);
            std::string reversedPrefix = std::string(prefix.rbegin(), prefix.rend());
            std::string reversedSuffix = std::string(suffix.rbegin(), suffix.rend());
            if (isPalindrome(suffix) && palindromes.find(reversedPrefix) != palindromes.end()) 
            {
                if (i + 1 != palindromes[reversedPrefix])
                    result.insert({ i + 1, palindromes[reversedPrefix] });
            }
            if (isPalindrome(prefix) && palindromes.find(reversedSuffix) != palindromes.end()) 
            {
                if (i + 1 != palindromes[reversedSuffix])
                    result.insert({ palindromes[reversedSuffix], i + 1 });
            }
        }
    }
    return result;
}

//std::vector<std::pair<uint32_t, uint32_t>> PalindromeStrings(const std::vector<std::string>& Strings)
//{
//	std::vector<std::pair<uint32_t, uint32_t>> Palindrome;
//	std::unordered_map<std::string, int> mString;
//	for (size_t i = 0; i < Strings.size(); ++i)
//	{
//		mString[Strings[i]] = i + 1;
//	}
//	for (size_t i = 0; i < Strings.size(); ++i)
//	{
//		
//	}
//
//}


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
	InputFile.ignore();
	std::vector<std::string> Strings(Size);
	std::string Line = "";
	for (size_t i = 0; i < Size; ++i)
	{
		std::getline(InputFile, Line);
		Strings[i] = Line;
	}

    std::multimap<int, int> palindromePairs = palindromePair(Strings);
	for (const auto& pair : palindromePairs)
	{
		OutputFile << pair.first << " " << pair.second << std::endl;
	}
	return 0;
}