#include <iostream>

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

/*
18.06.2025
16:42

Задача: Дан связанный список, его нужно перевернуть.

Идея: Переворачиваем указатели на следующие ноды, путем сохранения состояний с помощью pPrev, pNext. Итерируемся 
с помощью head.

Решение: 

P.S. 12:32 24.06.2025
Далеко понял не с первого раза задачу. Сложная штука.

*/

class SolutionRecursiveOne
{
public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* pPrev = nullptr;
        while (head)
        {
            ListNode* pNext = head->next;
            head->next = pPrev;
            pPrev = head;
            head = pNext;
        }
        return pPrev;
    }
};

/*

05.07.2025
18:29

Задача: Дан связанный список, его нужно перевернуть.

Идея: Использовать рекурсию

Решение: Дойти рекурсивно до последней ноды и вернуть ее. Дальше начинаем свапать указатели с конца с помощью head.
И всегда возвращаем новый head.

P.S. Все еще очень сложно понять рекурсию, не понимаю почему я не понимаю.
Максимально разобрал, но все еще чувствую, что в голове это штука не улажилась.

Рекурсивный подход 1:

*/

class SolutionRecursiveOne
{
public:
    ListNode* reverseList(ListNode* head)
    {
        /*
        Допустим у нас список 1 -> 2 -> 3 -> 4 -> nullptr
        Очевидно, что нужно идти до nullptr
        */

        if (!head || !head->next)
        {
            /*
            Находимся на последнем элементе(4) у нас head->next == nulpptr, следовательно возвращаем последний элемент
            в задачу на top стека.
            */
            return head;
        }

        /*
        
        Вернули 4. Находимся в состояние, где head == 3.

        */
        
        ListNode* Temp = reverseList(head->next);
        
        /*
        
        Тут, по идее, просто нужно свапнуть 3 и 4. И вернуть новую голову.
        
        */
        head->next->next = head; // Теперь 4 указывает на 3
        head->next = nullptr; // 3 Указывает на nullptr

        /*
        
        Теперь просто бесконечно возвращаем новый указатель на список
        
        */

        return Temp;
    }
};

/*

Идея: Использовать рекурсию

Решение: Дойти рекурсивно до nullptr списка. Но возвращаем pPrevNode.

Рекурсивный подход 2:

*/

class SolutionRecursiveTwo
{
public:
    ListNode* reverseList(ListNode* head, ListNode* pPrevNode = nullptr)
    {
        /*
        Идем до конца списка итерируяюсь по head. Если head == nullptr, то возвращаем наш новый указатель на начало.
        */
        if (head == nullptr)
        {
            return pPrevNode;
        }

        /*
        Смотрим на pNext.
        И говорим, что старый head теперь указывает на Nullptr.
        */
        ListNode* pNext = head->next;
        head->next = pPrevNode;

        /*
        Просто дальше передаем pNext и head.
        */
        return reverseList(pNext, head);
    }
};

int main()
{
    return 0;
}

/*

Notes of repeats

// 05.07.2025 - Success
// 17:14      - I didn't quite understand the idia. But I understand that in the algorithm, there is a pointer 
                to the head of the list in a chess-like arrangement.
// P.S.       - Task +, Idea -+, Solution +, Corner cases -+

// 07.07.2025 - Success
// 13:05      - Two recusion methods was realised with success.
// P.S.       - Task +, Idea +, Solution +, Corner cases +

// 19.07.2025 - Success 
// 19:56      - Repeat iterative method
// P.S.       - Task +, Idea +, Solution +, Corner cases +

// 19.07.2025 - Fail
// 19:56      - Recursives methods ideas i didnt remember. I think its because of this i dont fully understand
                recusion
// P.S.       - Task -, Idea -, Solution -, Corner cases -

*/