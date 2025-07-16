#include <iostream>
#include <vector>

/*

16:05
16.07.2025

Задача: Дано число n. Нужно вернуть все варианты BST деревьев, у которых n-нод со значениями от 1 до n. Возвращать
ответ можно в любому порядке.

Идея:

*/


struct TreeNode 
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
	std::vector<TreeNode*> generateTrees(int n)
	{

	}
};

