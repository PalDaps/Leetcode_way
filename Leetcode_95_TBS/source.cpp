#include <iostream>
#include <vector>

/*

16:05
16.07.2025

������: ���� ����� n. ����� ������� ��� �������� BST ��������, � ������� n-��� �� ���������� �� 1 �� n. ����������
����� ����� � ������ �������.

����:

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

