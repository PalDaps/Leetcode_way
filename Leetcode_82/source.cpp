#include <iostream>

/*

09.07.2025
22:04

������ : ��� ��������� ������. ���� �����������. ����� ������� ��� ������������� ��������.

����: ���� � ������� ����� ���� ��� ������������� ���� � ���� �� �������, ������� ������, ���� ���� ������ �� ������� �������
���� � ������ ���������.

�������: ���� ��� ��������� ���� �����, �� ���� �� �������, ���� �� �������� ���� � ������ ���������. ����� ����������
���������� ���� � ���� �� ������. 

P.S. 23:00 �� 40 ����� � ����� ����� �� �����. �� ���� ������ �� ���� ������ ����������� �������� � ������ ��������� ����� �
������.

P.S.
10.07.2025
13:59
����� ����� ����� ������� � ���� ������, �� ���� � ������ ������ ��� ������ �����, �������� ��� ��-�� ����, ��� ����� ����
�������� �����. �������� � ������ �� �������, ������������ ���� 20 ������, ��� ������������� ���� �������. ����� ����������
���� ����� ����� �������������� ���� : "���� �� ������ � �������". ��� ����� ����������. 

*/

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution 
{
public:
    ListNode* deleteDuplicates(ListNode* head)
    {
        ListNode* pIter = head;
        ListNode* pDummy = new ListNode(-1, head);
        ListNode* pPrev = pDummy;
        while (pIter && pIter->next)
        {
            ListNode* pNext = pIter->next;
            if (pIter->val == pNext->val)
            {
                while (pIter && pIter->next)
                {
                    pNext = pIter->next;
                    if (pIter->val != pNext->val)
                    {
                        pPrev->next = pNext;
                        pIter = pNext;
                        break;
                    }
                    else if (pNext->next == nullptr)
                    {
                        pPrev->next = nullptr;
                    }
                    pIter = pNext;
                }
            }
            else
            {
                pPrev = pIter;
            }
            pIter = pNext;

        }
        return pDummy->next;
    }
};