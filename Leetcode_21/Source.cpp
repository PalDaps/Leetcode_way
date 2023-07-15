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

//class Solution
//{
//public: 
//	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
//	{
//		ListNode* result = new ListNode(0);
//		ListNode* current_result = result;
//   		while (true)
//		{
//			if (list1 == nullptr && list2 == nullptr)
//			{
//				return result->next;
//			}
//			else if (list1 == nullptr)
//			{
//				current_result->next = list2;
//				return result->next;
//			}
//			else if (list2 == nullptr)
//			{
//				current_result->next = list1;
//				return result->next;
//			}
//			else
//			{
//				if (list1->val < list2->val)
//				{
//					current_result->next = list1;
//					current_result = current_result->next;
//					list1 = list1->next;
//				}
//				else
//				{
//					current_result->next = list2;
//					current_result = current_result->next;
//					list2 = list2->next;
//				}
//			}
//		}
//	}
//};

//class Solution {
//public:
//	ListNode* mergeTwoLists(ListNode* first, ListNode* second) {
//		ListNode* current = first;
//		ListNode* res = first;
//		while (current != nullptr) {
//			current = current->next;
//				
//		}
//		current = second;
//		current = first;
//		while (current != nullptr) {
//			std::cout << current << " ";
//			current = current->next;
//		}
//		return current;
//	}
//};

//class Solution {
//public:
//	ListNode* mergeTwoLists(ListNode* first, ListNode* second) {
//		ListNode res(0);
//		ListNode* temp = &res;
//		while (true) {
//			if (first == nullptr && second == nullptr) {
//				return nullptr;
//			}
//			else if (first == nullptr) {
//				temp->next = second;
//				return res.next;
//			}
//			else if (second == nullptr) {
//				temp->next = first;
//				return res.next;
//			}
//			else {
//				if (first->val < second->val) {
//					temp->next = first;
//					first = first->next;
//					temp = temp->next;
//				}
//				else {
//					temp->next = second; // просто темп надо брать
//					second = second->next;
//					temp = temp->next;
//				}
//			}
//		}
//		return res.next;
//	}
//};

// after a day. I remember it, but i cought this rofl mistake:
// curr->next == list1 xDDDDDDDDDDDDDDD 20 min is waste

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
		ListNode res(0);
		ListNode* curr = &res;
		while (true) {
			if (list1 == nullptr && list2 == nullptr) {
				return res.next;
			}
			else if (list1 == nullptr) {
				curr->next = list2;
				return res.next;
			}
			else if (list2 == nullptr) {
				curr->next = list1;
				return res.next;
			}
			else {
				if (list1->val < list2->val) {
					curr->next = list1;
					list1 = list1->next;
					curr = curr->next;
				}
				else {
					curr->next = list2;
					list2 = list2->next;
					curr = curr->next;
				}
			}

		}
	}
};

// SUCCESS 7 / 10 / 2023

// 7 / 12 / 2023 / SUCCESS!

// 4 : 45 PM / 19
// 7 / 15 / 2023 / SUCCESS

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