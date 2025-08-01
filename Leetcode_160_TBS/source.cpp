#include <iostream>

/*
18.06.2025
14:24

������: ���� 2 ��������� ������. ����� ������� ����, ��� ��� �������� ������������.

����: ��������� ������ �� ��� ���, ���� �� ����������. � ���� ����������� ������ ��������� �� ������ ������� ������.

�������: ���� �� �������. ���� �������� ��������� nullptr ������ �� � ����� ������ � ������ ������ �������� ������ � ������ ������� ������.
��� ��� ����� ��� �����������, ��� ��� ������� ���������� ����������.

P.S.
26.07.2025
19:15
�� ���� ������ ������ ������, ����� ���� ��������� ������ ����. ���� �� ����� �������(�������).

*/

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
    {
        ListNode* pIteratorA = headA;
        ListNode* pIteratorB = headB;
        while (pIteratorA != pIteratorB)
        {
            if (pIteratorA == nullptr) pIteratorA = headB;
            else pIteratorA = pIteratorA->next;

            if (pIteratorB == nullptr) pIteratorB = headA;
            else pIteratorB = pIteratorB->next;
        }
        return pIteratorA;
    }
};

/*

Notes of repeats

// 26.07.2025 - Failure
// 19:10      -
// P.S.       - Task +, Idea +, Solution -, Corner cases -

*/