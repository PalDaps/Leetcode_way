#include <iostream>

/*
18.06.2025
16:42

������: ��� ��������� ������, ��� ����� �����������.

����: �������������� ��������� �� ��������� ����, ����� ���������� ��������� � ������� pPrev, pNext. ����������� 
� ������� head.

�������: 

P.S. 12:32 24.06.2025
������ ����� �� � ������� ���� ������. ������� �����.

*/

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

/*

05.07.2025
18:29

������: ��� ��������� ������, ��� ����� �����������.

����: ������������ ��������

�������:

P.S. ��� ��� ����� ������ ������ ��������, �� ������� ������ � �� �������.
����������� ��������, �� ��� ��� ��������, ��� � ������ ��� ����� �� ���������.

����������� ������ 1:

*/

class Solution
{
public:
    ListNode* reverseList(ListNode* head)
    {
        /*
        �������� � ��� ������ 1 -> 2 -> 3 -> 4 -> nullptr
        ��������, ��� ����� ���� �� nullptr
        */

        if (!head || !head->next)
        {
            /*
            ��������� �� ��������� ��������(4) � ��� head->next == nulpptr, ������������� ���������� ��������� �������
            � ������ �� top �����.
            */
            return head;
        }

        /*
        
        ������� 4. ��������� � ���������, ��� head == 3.

        */
        ListNode* Temp = reverseList(head->next);
        /*
        ���, �� ����, ������ ����� �������� 3 � 4. � ������� ����� ������.
        */
        head->next->next = head; // ������ 4 ��������� �� 3
        head->next = nullptr; // 3 ��������� �� nullptr

        /*
        ������ ������ �������� ���������� ���������� ����� ��������� �� ������
        */

        return Temp;
    }
};

/*

����������� ������ 2:

*/

class Solution 
{
public:
    ListNode* reverseList(ListNode* head, ListNode* pPrevNode = nullptr)
    {
        /*
        ���� �� ����� ������ ����������� �� head. ���� head == nullptr, �� ���������� ��� ����� ��������� �� ������.
        */
        if (head == nullptr)
        {
            return pPrevNode;
        }

        /*
        ������� �� pNext.
        � �������, ��� ������ head ������ ��������� �� Nullptr.
        */
        ListNode* pNext = head->next;
        head->next = pPrevNode;

        /*
        ������ ������ �������� pNext � head.
        */
        return reverseList(pNext, head);
    }
};



/*

����������� ������:

class Solution
{
public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* pPrev = nullptr;
        ListNode* pNext = nullptr;
        while (head)
        {
            pNext = head->next;
            head->next = pPrev;
            pPrev = head;
            head = pNext;
        }
        return pPrev;
    }
};

*/

/*

Notes of repeats

// 05.07.2025 - Success
// 17:14      - I didn't quite understand the idia. But I understand that in the algorithm, there is a pointer 
                to the head of the list in a chess-like arrangement.
// P.S.       - Task +, Idea -+, Solution +, Corner cases -+

*/