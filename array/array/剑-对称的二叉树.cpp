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
		return Symmetrical(pRoot->left,pRoot->right);
    }

	bool Symmetrical(TreeNode* left,TreeNode* right)
	{
		if(left == NULL && right == NULL)
			return true;
		if((left == NULL && right != NULL) || (left != NULL && right == NULL))
			return false;
		return (left->val == right->val) && (Symmetrical(left->left,right->right)) && (Symmetrical(left->right,right->left));
	}

};