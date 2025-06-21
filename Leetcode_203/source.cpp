#include <iostream>

/*
20.06.2025
14:49

������: ��� ��������� ������, ����� ������� ��� �������� �� ����� ������� ���������.

����: ������ �� ������ � ������� �� ����.

�������: 

P.S. �� ���-�� � ����� ��� ��������� � ���������� ����-����. ��� ���� ������ ����� ���-�� 46 ����� easy ������. �� �����. 
������� ���� ��, ��� ��� ���� �������� �������� � �� ����� �������� 5 �������� ����������, ����� ������ ��� �� ������ ���� ���������.
*/

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

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