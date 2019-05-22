#include<stdio.h>
#include<vector>
using namespace std;


struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
		vector<int> p;
		if(root != NULL)
		{
			p.push_back(root->val);
		    path(res,p,root,sum-root->val);
		}
		return res;
    }

	void path(vector<vector<int>> &res,vector<int> f,TreeNode* root, int sum)
	{
		if(sum == 0 && (root->left == NULL && root->right == NULL))
		{
			res.push_back(f);
			return;
		}
		
		
		if(root->left != NULL)
		{
			f.push_back(root->left->val);
			path(res,f,root->left,sum-root->left->val);
			f.pop_back();
		}
		if(root->right != NULL)
		{
			f.push_back(root->right->val);
			path(res,f,root->right,sum-root->right->val);
			f.pop_back();
		}
	}
};