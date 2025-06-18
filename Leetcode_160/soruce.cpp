#include <iostream>

/*
18.06.2025
14:01

������: ���� 2 ��������� ������. ����� ������� ����, ��� ��� �������� ������������.

����:

�������: ��� ����� ������ ������. ����� ������ ������ �������, ��� ��� �� ����� ������ � ���� ������. ���� ����� �� ���������� ����.

P.S. ������ ������� �� ����� �������� ������. ����� ������ ���������� ������ ����� ������ ������� � ���.
P.S.
14:34 
�� ���������� ������ � �����. ��� ����� ������ ����� ��� �������, ��� ��� � ��� ����� ���� �� o(1).


*/

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class SolutionBruteForce {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
    {
        ListNode* pIteratorA = headA;
        ListNode* pIteratorB = headB;
        while (pIteratorA || pIteratorB)
        {
            ListNode* pIteratorA = headA;
            ListNode* pIteratorB = headB;
            while (pIteratorA != nullptr)
            {
                pIteratorB = headB;
                while (pIteratorB != nullptr)
                {
                    if (pIteratorA == pIteratorB) return pIteratorA;
                    pIteratorB = pIteratorB->next;
                }
                pIteratorA = pIteratorA->next;
            }
            return nullptr;
        }
        return nullptr;
    }
};
