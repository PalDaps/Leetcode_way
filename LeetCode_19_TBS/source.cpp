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
    ListNode(int x, ListNode* next) : val(x), next(next) {}
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

/*
26.07.2025
20:49

������: ��� ��������� ������ � ����� n. ����� ������� n-����, ������ �� �����.

����: ����� �� ����� ���������, ��������� n, ������� �� ������ ���������� � ��������� head->next.

*/

class SolutionRecursion 
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int& n)
    {
        if (head == nullptr) return head;
        head->next = removeNthFromEnd(head->next, n);
        n--;
        if (n == 0)
        {
            ListNode* pDeleteNode = head;
            head = head->next;
            delete pDeleteNode;
        }
        return head;
    }
};

int main()
{
    ListNode* pFive = new ListNode(5, nullptr);
    ListNode* pFour = new ListNode(4, pFive);
    ListNode* pThree = new ListNode(3, pFour);
    ListNode* pTwo = new ListNode(2, pThree);
    ListNode* pOne = new ListNode(1, pTwo);

    SolutionRecursion Daps;
    int N = 2;
    Daps.removeNthFromEnd(pOne, N);

    delete pOne;
    delete pTwo;
    delete pThree;
    delete pFour;
    delete pFive;

    return 0;
}

/*

Notes of repeats

// 27.07.2025 - Failure
// 15:45      - Repeat not recursive method
// P.S.       - Task +, Idea +, Solution +, Corner cases +

*/
