#include <iostream>

/*
18.06.2025
16:42

������: ��� ��������� ������, ��� ����� �����������.

����: �������������� ��������� �� ��������� ����, ����� ���������� ��������� � ������� pPrev, pNext. ����������� � ������� head.

�������: 

P.S. 12:32 24.06.2025
������ ����� �� � ������� ���� ������. ������� �����.

*/

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* pPrev = nullptr;
        ListNode* pNext = nullptr;
        while (head)
        {
            pNext = head->next;
            head->next = pPrev;
            pPrev = head;
            head = pNext;
        }
        return pPrev;
    }
};