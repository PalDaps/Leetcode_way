#include <iostream>

/*

27.07.2025
16:30

������: ��� ��������� ������, ����� ������� ��� �������� �� ����� ������� ���������.

����: pDummy. ���� ������� ����� val, �� �������� ������ �� ��������� �� ������� ���� ������� != val. 

*/

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution 
{
public:
    ListNode* removeElements(ListNode* head, int val)
    {
        ListNode* pDummy = new ListNode(-1, head);
        ListNode* pCurr = pDummy;
        while (pCurr->next)
        {
            ListNode* pNext = pCurr->next;
            if (pNext->val == val)
            {
                while (pNext->val == val)
                {
                    pNext = pNext->next;
                    if (pNext == nullptr) break;
                }
                pCurr->next = pNext;
            }
            else pCurr = pNext;
        }
        return pDummy->next;
    }
};

/*

20.06.2025
14:49

������: ��� ��������� ������, ����� ������� ��� �������� �� ����� ������� ���������.

����: ������ �� ������ � ������� �� ����.

�������:

P.S. �� ���-�� � ����� ��� ��������� � ���������� ����-����. ��� ���� ������ ����� ���-�� 46 ����� easy ������. �� �����.
������� ���� ��, ��� ��� ���� �������� �������� � �� ����� �������� 5 �������� ����������, ����� ������ ��� �� ������ ���� ���������.

P.S.
27.07.2025
16:29
����� ��, � ����� �� ����� ����������, �� �� ���� �������, ������ ��� ���� � ���� � �������������� �� ����.

*/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val)
    {
        ListNode* pDummy = new ListNode(0);
        pDummy->next = head;
        ListNode* pIterator = pDummy;
        ListNode* pNextNode = pDummy;
        ListNode* pPrevNode = pDummy;
        while (pIterator)
        {
            pNextNode = pIterator->next;
            if (pIterator->val == val)
            {
                pPrevNode->next = pNextNode;
            }
            else
            {
                pPrevNode = pIterator;
            }
            pIterator = pNextNode;
        }
        return pDummy->next;
    }
};