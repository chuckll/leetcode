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
    bool isUnivalTree(TreeNode* root) {
        int val;
		if(root == NULL)
			return false;
		queue<TreeNode*> q;
		q.push(root);
		val = root->val;
		while(!q.empty())
		{
			TreeNode* flag = q.front();
			q.pop();
			if(flag->val != val)
				return false;
			if(flag->left != NULL)
				q.push(flag->left);
			if(flag->right != NULL)
				q.push(flag->right);
		}
		return true;
    }
};