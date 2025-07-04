#include <iostream>
#include <vector>

/*

04.07.2025
14:02

������: ���� ��������� ������. ����� �������� 2 ������� ����(������� ���� �� �����������). 1 -> 2 > 3

����: ������ ������� ����. �� ����� ���������� ���������� ����, 

P.S. ����� �� ��� ���-�� � 5-� ������� �������, ���-�� �� �������� ��� � ������ ������������. �������, ��� 
��������� ��������� �������. �������, ������ ������������� ����� ������. �� ����� �� ��� ���� ������������, 
������-��. ������ ���� ����� ������������ ����������.

*/


struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* swapPairs(ListNode* head)
    {
        if (!head || !head->next) return head;

        ListNode* pDummy = new ListNode(0, head);
        ListNode* pIt = pDummy->next;
        ListNode* pPrev = pDummy;

        while (pIt && pIt->next)
        {
            ListNode* pNext = pIt->next;
            ListNode* pTemp = pNext->next;

            pNext->next = pIt;
            pIt->next = pTemp;
            pPrev->next = pNext;

            pPrev = pIt;
            pIt = pTemp;
        }

        return pDummy->next;
    }
};