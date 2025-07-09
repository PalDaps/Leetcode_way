#include <iostream>

/*

08.07.2025
21:14

Задача: Дано бинарное дерево. Нужно найти максимальный путь в дерево из нод(не по ребрам)

Идея:  

P.S. 21:22 Как это понять?
P.S.
09.07.2025
11:57
Я не могу понять глубину рекурсии.

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


class Solution {
public:
    int maxDepth(TreeNode* root)
    {
        if (!root) return 0;
        int maxDepthLeft = maxDepth(root->left);
        int maxDepthRight = maxDepth(root->right);
        return std::max(maxDepthLeft, maxDepthRight) + 1;
    }
};

int main()
{
    TreeNode* pSeven = new TreeNode(7, nullptr, nullptr);
    TreeNode* pSix = new TreeNode(6, nullptr, nullptr);
    TreeNode* pFive = new TreeNode(5, pSeven, nullptr);
    TreeNode* pFour = new TreeNode(4, nullptr, nullptr);
    TreeNode* pThree = new TreeNode(3, nullptr, pSix);  
    TreeNode* pTwo = new TreeNode(2, pFour, pFive);
    TreeNode* pHead = new TreeNode(1, pTwo, pThree);

    Solution Daps;
    Daps.maxDepth(pHead);

    return 0;
}