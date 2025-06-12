#include <iostream>
#include <unordered_map>
/*
12.06.2025
18:42

«адача: ƒан св€занный список. Ќужно пон€ть зациклен он или нет.

»де€: ” нас есть два указател€, один, который идет шаг за шагом и второй, которой ходит через один. ≈сли они будут равны, значит
св€занный список зациклен.

P.S.
12.06.2025
18:56
я не совсем понимаю, как второй указатель найдет первый в 100% случаев, если они шагают на разное количество нод.

P.S.
12.06.2025
19:15
“о, что второй укзатель, который быстрее, чем первый на 1 ноду можно пон€ть просто практически, пронав пару примеров. Ќо € словил
RE, так как не чувствую ->next->next и ->next, не могу в голове сгенерировать в моменте случай, когда они nullptr.

*/

typedef struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};


class Solution
{
public:
	bool hasCycle(ListNode* pHead)
	{
		ListNode* pOneStep = pHead;
		ListNode* pTwoStep = pHead;
		while (pTwoStep != nullptr && pTwoStep->next != nullptr)
		{
			pOneStep = pOneStep->next;
			pTwoStep = pTwoStep->next->next;
			if (pOneStep == pTwoStep) return true;
		}
		return false;
	}
};

int main()
{
	return 0;
}