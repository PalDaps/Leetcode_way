#include <iostream>
#include <unordered_map>

/*
12.06.2025
18:42

Задача: Дан связанный список. Нужно понять зациклен он или нет.

Идея: Мы знаем, что у всех нод разный указатель. Поэтому можно смотреть начнет ли указатель на ноду повторяться или нет. Искать повторяющийся указатель
на ноду можно в хеш-таблице.
*/

typedef struct ListNode 
{
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};


class Solution
{
public:
	bool hasCycle(ListNode* head)
	{
		std::unordered_map<ListNode*, int> Map;
		ListNode* pIterator = head;
		while (pIterator != nullptr)
		{
			if (Map.count(pIterator))
			{
				return true;
			}
			Map[pIterator]++;
			pIterator = pIterator->next;
		}
		return false;
	}
};

int main()
{
	return 0;
}