#include<stdio.h>
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};

class Solution {
public:
    bool isSymmetrical(TreeNode* pRoot)
    {
		if(pRoot == NULL)
			return true;
		return isSymm(pRoot->left,pRoot->right);
    }


	bool isSymm(TreeNode* left,TreeNode* right)
    {
		if((left == NULL && right != NULL) ||
			(left != NULL && right == NULL))
			return false;
		if(left == NULL && right == NULL)
			return true;
		return (left->val == right->val) && isSymm(left->left,right->right) && isSymm(left->right,right->left);
    }

};