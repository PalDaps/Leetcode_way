#include <iostream>

struct TreeNode 
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

/*

02.08.2025
13:33

Задача: Проверить, является ли дерево BST или нет. Если BST вернут истину, иначе ложь.

Идея: Пройти все левое поддерево, после начать для нижней левой ноды начать проходить правое поддерево.
И потом проверять на BST.

P.S. 13:36 Довольно хорошо 46/86 на собтсвенном решении. Но понять почему я не прохожу остальные тесты, пока не могу.
P.S. 14:00 За 40 минут придумал такой код, не решил.
P.S. 14:12 Прикол в том, что все значения нод слева от head должны быть меньше head->val, а справа больше. Я этого
не учитваю.

*/

class Solution
{
public:
    bool isValidBST(TreeNode* root)
    {
        if (root == nullptr) return false;

        isValidBST(root->left);
        isValidBST(root->right);

        int HeadVal = root->val;
        int LeftVal = root->left ? root->left->val : INT_MIN;
        int RightVal = root->right ? root->right->val : INT_MIN;
        if (HeadVal > LeftVal && HeadVal < RightVal) return true;
        else if (LeftVal == INT_MIN && RightVal == INT_MIN) return true;
        return false;
    }
};

int main()
{
    TreeNode* pRight = new TreeNode(3, nullptr, nullptr);
    TreeNode* pLeft = new TreeNode(1, nullptr, nullptr);
    TreeNode* pHead = new TreeNode(2, pLeft, pRight);
       
    Solution Daps;
    Daps.isValidBST(pHead);

    delete pRight;
    delete pLeft;
    delete pHead;
    return 0;
}

