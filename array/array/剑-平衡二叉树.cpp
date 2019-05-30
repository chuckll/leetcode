#include<stdio.h>
#include<algorithm>
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
    bool IsBalanced_Solution(TreeNode* pRoot) {
		if(pRoot == NULL)
			return true;

		return (abs(maxDepth(pRoot->left) - maxDepth(pRoot->right)) <= 1) &&
			(IsBalanced_Solution(pRoot->left)) && (IsBalanced_Solution(pRoot->right));
    }

	int maxDepth(TreeNode* root)
	{
		if(root == NULL)
			return 0;

		return 1 + max(maxDepth(root->left),maxDepth(root->right));
	}
};