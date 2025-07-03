#include <iostream>
#include <unordered_map>
/*
12.06.2025
18:42

������: ��� ��������� ������. ����� ������ �������� �� ��� ���.

����: � ��� ���� ��� ���������, ����, ������� ���� ��� �� ����� � ������, ������� ����� ����� ����. ���� ��� ����� �����, ������
��������� ������ ��������.

P.S.
12.06.2025
18:56
� �� ������ �������, ��� ������ ��������� ������ ������ � 100% �������, ���� ��� ������ �� ������ ���������� ���.

P.S.
12.06.2025
19:15
��, ��� ������ ��������, ������� �������, ��� ������ �� 1 ���� ����� ������ ������ �����������, ������� ���� ��������. �� � ������
RE, ��� ��� �� �������� ->next->next � ->next, �� ���� � ������ ������������� � ������� ������, ����� ��� nullptr.

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
	bool hasCycle(ListNode* pHead)
	{
		ListNode* pOneStep = pHead;
		ListNode* pTwoStep = pHead;
		while (pTwoStep != nullptr && pTwoStep->next != nullptr)
		{
			pOneStep = pOneStep->next;
			pTwoStep = pTwoStep->next->next;
			if (pOneStep == pTwoStep) return true;
		}
		return false;
	}
};

int main()
{
	return 0;
}

/*

// Notes of repeats

// 03.07.2025 : Success 
// 9:48       : Done it problem for 3 minute, because i perfactly know the idea, but i feel like that i can forget some 
// 				corner cases. And i dont understand how i can keep all corner cases in my head. But progress there 
//				is here really
// P.S.		  : Task +, Idea +, Solution +, Corner cases +-
// P.S.       : Btw, i repeated this problem after 21 day and solved with success

*/