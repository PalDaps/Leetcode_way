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
		ListNode* result;
		if (list1 == nullptr && list2 == nullptr )
		{
			result = nullptr;
			return result;
		}
		else if (list1 == nullptr)
		{
			result = list2;
			return result;
		}
		else if (list2 == nullptr)
		{
			result = list1;
			return result;
		}
		else
		{
			ListNode* current_one = list1;
			ListNode* current_two = list2;
			while (current_one != nullptr)
			{
				if (current_one->val > current_two->val)
				{
					result = current_two;
					result->next = current_one;
					current_one = current_one->next;
					current_two = current_two->next;
				}
				else if (current_one->val < current_two->val)
				{
					result = current_one;
					result->next = current_two;
					current_one = current_one->next;
					current_two = current_two->next;
				}
				else
				{
					result = current_one;
					result->next = current_two;
					current_one = current_one->next;
					current_two = current_two->next;
				}
			}
			return result;
		}
	}
};

int main()
{
	ListNode* head = new ListNode(5);
	ListNode* second = new ListNode(2);
	head->next = second;
	ListNode* third = new ListNode(3);
	second->next = third;
	
	ListNode* current = head;
	while (current != nullptr)
	{
		std::cout << current->val << " ";
		current = current->next;
	}
	std::cout << std::endl;


	ListNode* head_ = new ListNode(8);
	ListNode* second_ = new ListNode(7);
	head_->next = second_;
	ListNode* third_ = new ListNode(6);
	second_->next = third_;

	current = head_;
	while (current != nullptr)
	{
		std::cout << current->val << " ";
		current = current->next;
	}
	std::cout << std::endl;

	Solution daps;
	ListNode* result;
	result = daps.mergeTwoLists(head, head_);
	current = result;
	while (result != nullptr)
	{
		std::cout << result->val << " ";
		result = result->next;
	}

	// delete memory
	current = head;
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