#include<stdio.h>
#include<queue>
using namespace std;


struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int res = 0;
		if(root == NULL)
			return 0;
		if(isLeaf(root->left))
		{
			res += root->left->val;
		}
		res += sumOfLeftLeaves(root->left);
		res += sumOfLeftLeaves(root->right);
		return res;
    }

	bool isLeaf(TreeNode* root)
	{
		if(root == NULL)
			return false;
		if(root->left == NULL && root->right == NULL)
			return true;
		else
			return false;
	}
};