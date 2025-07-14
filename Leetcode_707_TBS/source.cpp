/*

18:49
10.05.2025

Задача: спроектирвать linked list.

Идея: не тильтануть в конец, удачи :)

12.06.2025 
хахаахахахахаха, прошел месяц. Я все-такие тильтанул. И до сих пор не могу сам написать linked list :).

*/

class Node
{
public:
    int Value;
    Node* pNext;
    Node(int Value) : Value(Value), pNext(nullptr) {}
};

class MyLinkedList {
    Node* pHead;
    int Size;
public:
    MyLinkedList() : pHead(nullptr), Size(0) {}

    int get(int index)
    {
        if (index >= Size || index < 0)
        {
            return -1;
        }

        Node* pCurrent = pHead;
        for (size_t i = 0; i < index; ++i)
        {
            pCurrent = pCurrent->pNext;
        }
        return pCurrent->Value;
    }

    void addAtHead(int val)
    {
        addAtIndex(0, val);
    }

    void addAtTail(int val)
    {
        addAtIndex(Size, val);
    }

    void addAtIndex(int index, int val)
    {
        if (index > Size || index < 0)
        {
            return;
        }

        Node* pCurrent = pHead;
        Node* pNewNode = new Node(val);

        if (index == 0)
        {
            pNewNode->pNext = pCurrent;
            pHead = pNewNode;
        }
        else
        {
            for (size_t i = 0; i < index - 1; i++)
            {
                pCurrent = pCurrent->pNext;
            }
            pNewNode->pNext = pCurrent->pNext;
            pCurrent->pNext = pNewNode;
        }
        Size++;
    }

    void deleteAtIndex(int index)
    {
        if (index >= Size || index < 0)
        {
            return;
        }

        if (index == 0)
        {
            Node* pNextNode = pHead->pNext;
            delete pHead;
            pHead = pNextNode;
        }
        else
        {
            Node* pCurrent = pHead;

            for (size_t i = 0; i < index - 1; i++)
            {
                pCurrent = pCurrent->pNext;
            }
            Node* pNextNode = pCurrent->pNext->pNext;
            delete pCurrent->pNext;

            pCurrent->pNext = pNextNode;
        }
        Size--;
    }

    ~MyLinkedList()
    {
        Node* pNode = pHead;
        while (pHead != nullptr)
        {
            pHead = pHead->pNext;
            delete pNode;
            pNode = pHead;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */