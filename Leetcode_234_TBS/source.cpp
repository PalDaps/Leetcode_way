#include <iostream>

/*
24.06.2025
13:01

������: ��� ��������� ������. ����� ������ �������� �� �� ����������� ��� ���.

����: ����� ��������. ���������� ��������� ����� ������. � �������� ��� ����� ������ ���� �� �������� �����, ������� �����������. 

P.S. ��� ������� ��� ����� �� ������. ����, ��������, ����� �������, ���� ����� �� ����������� ���������. 

*/

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head)
    {
        ListNode* pSlow = head;
        ListNode* pFast = head;
        while (pFast && pFast->next)
        {
            pSlow = pSlow->next;
            pFast = pFast->next->next;
        }

        ListNode* pPrev = nullptr;
        ListNode* pNext = nullptr;
        while (pSlow)
        {
            pNext = pSlow->next;
            pSlow->next = pPrev;
            pPrev = pSlow;
            pSlow = pNext;
        }

        while (pPrev && head)
        {
            if (pPrev->val != head->val) return false;
            pPrev = pPrev->next;
            head = head->next;
        }

        return true;
    }
};