#include <iostream>

/*
24.06.2025
11:05

������: ��� ��������� ������. ����� ����������� ��� ���� � �������� ������� � ����� ������.

����: ��� ���������. ������ �� ��������, ������ �� ������. �������� ����������� �� ���� ���������� �� ������. � ������ �� ���� ���������.

P.S. 
����� ���������, ��� ����������� pOdd->next ��� ������������ ��� ������������ ������ ����� � ������. ���������.

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
    ListNode* oddEvenList(ListNode* head)
    {
        if (!head || !head->next || !head->next->next) return head;
        ListNode* pOdd = head;
        ListNode* pEven = head->next;
        ListNode* pEvenStart = pEven;

        while (pOdd->next && pEven->next)
        {
            pOdd->next = pEven->next;
            pEven->next = pOdd->next->next;
            pOdd = pOdd->next;
            pEven = pEven->next;
        }
        pOdd->next = pEvenStart;
        return head;
    }
};