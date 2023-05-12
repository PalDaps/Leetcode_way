#include <iostream>

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
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
	{
		ListNode* result = new ListNode(0);
		ListNode* current_result = result;
   		while (true)
		{
			if (list1 == nullptr && list2 == nullptr)
			{
				return result->next;
			}
			else if (list1 == nullptr)
			{
				current_result->next = list2;
				return result->next;
			}
			else if (list2 == nullptr)
			{
				current_result->next = list1;
				return result->next;
			}
			else
			{
				if (list1->val < list2->val)
				{
					current_result->next = list1;
					current_result = current_result->next;
					list1 = list1->next;
				}
				else
				{
					current_result->next = list2;
					current_result = current_result->next;
					list2 = list2->next;
				}
			}
		}
	}
};

int main()
{
	ListNode* head = new ListNode(1);
	ListNode* second = new ListNode(2);
	head->next = second;
	ListNode* third = new ListNode(4);
	second->next = third;
	
	ListNode* current = head;
	while (current != nullptr)
	{
		std::cout << current->val << " ";
		current = current->next;
	}
	std::cout << std::endl;


	ListNode* head_ = new ListNode(1);
	ListNode* second_ = new ListNode(3);
	head_->next = second_;
	ListNode* third_ = new ListNode(4);
	second_->next = third_;

	current = head_;
	while (current != nullptr)
	{
		std::cout << current->val << " ";
		current = current->next;
	}
	std::cout << std::endl;

	Solution daps;
	current = daps.mergeTwoLists(head, head_);
	while (current != nullptr)
	{
		std::cout << current->val << " ";
		current = current->next;
	}

	// delete memory
	/* current = head;
	while (current != nullptr)
	{
		ListNode* temp = current;
		current = current->next;
		delete temp;
	}

	current = head_;
	while (current != nullptr)
	{
		ListNode* temp = current;
		current = current->next;
		delete temp;
	}
	/* current = result;
	while (current != nullptr)
	{
		ListNode* temp = current;
		current = current->next;
		delete temp;
	}
	*/
	return 0;
}