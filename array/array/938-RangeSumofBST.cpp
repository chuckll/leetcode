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
    int rangeSumBST(TreeNode* root, int L, int R) {
        int result = 0;
		if(root == NULL)
			return result;
		queue<TreeNode*> q;
		q.push(root);
		while(!q.empty())
		{
			TreeNode* flag = q.front();
			q.pop();
			if(flag->val >= L && flag->val <= R)
				result += flag->val;
			if(flag->left != NULL)
				q.push(flag->left);
			if(flag->right != NULL)
				q.push(flag->right);
		}
		return result;
	}
};