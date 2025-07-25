#include <iostream>

/*
18.06.2025
15:48

������: ��� ��������� ������ � ����� n. ����� ������� n-����, ������ �� �����.

����:

�������: ��� ���������. ���� ������� � ����� ����, ������ ������� � ����� n. ��� ������ ������ ����� Nullptr. ������ ������ ����� �� ����,
�������� ��������� ����� ���, ������� ����� �������. �������. ��� ����� ������ ������, ��� n == Size.

P.S. ������� �������� �������, �� ��������� ����������� �� ����.
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
        ListNode* pSlow = head;
        ListNode* pFast = head;
        while (1)
        {
            pSlow = pSlow->next;
            for (size_t i = 0; i < n; i++)
            {
                if (pFast == nullptr)
                {
                    ListNode* pDeleteNode = pSlow->next;
                    pSlow->next = pDeleteNode->next;
                    return head;
                }
                pFast = pFast->next;
            }
        }
        return nullptr;
    }
};

