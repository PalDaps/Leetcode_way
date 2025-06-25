#include <iostream>

/*

24.06.2025
13:31

������: ���� ��� ������� ������ � �������. ����� ������� �������� ���, �� �������� ����� �����. � ������� �������������� ������ � ��������
������ � ����� ����� � �����.

����: ���������� ������ � ������. � ���������� ��������� ������ ������ � �������� ��� � ��������� �����.

P.S. ���� ������ ������������ ������������� ������ �� �����. ������������� � ������� ����������� �� �������, �� ���� ���������� �����.
������� ������ � ��������� �������.

*/


struct ListNode
{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr)
	{
	}
	ListNode(int x) : val(x), next(nullptr)
	{
	}
	ListNode(int x, ListNode* next) : val(x), next(next)
	{
	}
};


class Solution {
public:
    ListNode* RotateList(ListNode* pHead)
    {
        ListNode* pPrev = nullptr;
        ListNode* pNext = nullptr;
        while (pHead)
        {
            pNext = pHead->next;
            pHead->next = pPrev;
            pPrev = pHead;
            pHead = pNext;
        }
        return pPrev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* pResultList = new ListNode();
        ListNode* pItResult = pResultList;
        ListNode* pReversL1 = RotateList(l1);
        ListNode* pReversL2 = RotateList(l2);
        int AddSum = 0;

        while (pReversL1 || pReversL2)
        {

            if (!pReversL2)
            {
                /*
                L1 > L2
                9 9 3 4
                5 9
                */
            }
            else
            {
                /*
                9 + 9 = 18

                */
                int Sum = pReversL1->val + pReversL2->val + AddSum;
                int ResultSum = Sum % 10;
                AddSum = Sum / 10;

                ListNode* pNode = new ListNode(ResultSum);
                pItResult->next = pNode;
                pItResult = pItResult->next;
            }
        }
        return pResultList->next;
    }
};

