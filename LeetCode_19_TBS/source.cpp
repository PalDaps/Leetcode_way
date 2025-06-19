#include <iostream>

/*
18.06.2025
16:08

������: ��� ��������� ������ � ����� n. ����� ������� n-����, ������ �� �����.

����: ��� ���������. ���� ������� ��������� �������� � ����� n, � ����� ������� ������ � ������ � ����� ����, �� ��������� �������� �� ����
�� ������� ����� ������, ������� ����� �������.

�������: ��� ���������. ���� ������� � ����� ����, ������ ������� � ����� n. ��� ������ ������ ����� Nullptr. ������ ������ ����� �� ����,
�������� ��������� ����� ���, ������� ����� �������. �������. ��� ����� ������ ������, ��� n == Size. ����� ���������� �������� Dummy ����,
����� ������ n == Size. � ������ ��������� ����� ������� �� � ����� n, � ������� ���� ��� � ����� n, � ����� ������ ��� ������.

P.S. ����� ����� �������.
*/

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode* pDummy = new ListNode(0);
        pDummy->next = head;
        ListNode* pSlow = pDummy;
        ListNode* pFast = pDummy;

        for (size_t i = 0; i <= n; i++)
        {
            pFast = pFast->next;
        }
        while (pFast != nullptr)
        {
            pFast = pFast->next;
            pSlow = pSlow->next;
        }
        ListNode* pDeleteNode = pSlow->next;
        pSlow->next = pDeleteNode->next;
        delete pDeleteNode;

    }
};
