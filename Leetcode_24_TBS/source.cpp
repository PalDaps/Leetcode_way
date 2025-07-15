#include <iostream>

/*

04.07.2025
23:44

������: ���� ��������� ������. ����� �������� 2 ������� ����(������� ���� �� �����������). 1 -> 2 > 3

����: 

�������: ������� ������, ����� ������ ���� - ���������� nullptr. � ������ nullptr � ������������� ����, �����
��� ��� ��������� ���� ���������. �� ������� ->next ��������� ���� �� �������������. � ���������� ��������� ����.
� ������ ��� � ��������. �����.

P.S. ������ �� ������� ��� ��� ��������, ���� �������� ����������.
P.S. ������ �� �������.
P.S. �������� ���� �������� ������������� �� ���� �����.

*/

struct ListNode
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head)
    {
        if (!head || !head->next)
        {
            return head;
        }
        ListNode* Temp = head->next;
        head->next = swapPairs(head->next->next);
        Temp->next = head;
        return Temp;
    }
};

int main()
{
    /*
    
    �������� ������: 1 -> 2 -> 3 -> 4 -> nullptr
    
    */
    ListNode* pOne = new ListNode(1);
    ListNode* pTwo = new ListNode(2);
    ListNode* pThree = new ListNode(3);
    ListNode* pFour = new ListNode(4, nullptr);

    pOne->next = pTwo;
    pTwo->next = pThree;
    pThree->next = pFour;

    Solution Recursion;
    Recursion.swapPairs(pOne);

    delete pOne;
    delete pTwo;
    delete pThree;
    delete pFour;
    return 0;
}
