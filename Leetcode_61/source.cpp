#include <iostream>

/*

02.07.2025
17:52

������: ���� ������ � ����� k. ����� �������� ������ ������ �� ����� k.

����: ��������� ����. � �� ����� ��� ����� ������ ������ � ������� ���� �����: Size � k.

P.S. ���, ������� ���� ���� ���� 2 � � ����� ������ �� ��������.
P.S. �������, ������-�� git ������ ��� ���

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

class Solution
{
public:
    ListNode* rotateRight(ListNode* head, int k)
    {
        if (!head) return nullptr;
        ListNode* pTail = head;
        ListNode* pNewHead = head;
        int Size = 1;
        while (pTail->next)
        {   
            pTail = pTail->next;
            Size++; 
        }
        pTail->next = head;
        if (k %= Size)
        {
            for (size_t i = 0; i < Size - k; i++)
            {
                pTail = pTail->next;
            }
        }
        pNewHead = pTail->next;
        pTail->next = nullptr;
        return pNewHead;
    }
};