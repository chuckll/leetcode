#include<stdio.h>
#include<vector>
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
    vector<vector<int>> FindPath(TreeNode* root,int expectNumber) {
		vector<vector<int>> res;
		vector<int> p;
		if(root == NULL)
			return res;
		p.push_back(root->val);
		path(root,expectNumber-root->val,res,p);
		return res;

    }

	void path(TreeNode* root,int num,vector<vector<int>> &res,vector<int> p)
	{
		if(num == 0 && root->left == NULL && root->right == NULL)
		{
			res.push_back(p);
			return;
		}
		if(num <= 0)
			return;
		if(root->left != NULL)
		{
			p.push_back(root->left->val);
			path(root->left,num-root->left->val,res,p);
			p.pop_back();
		}
		if(root->right != NULL)
		{
			p.push_back(root->right->val);
			path(root->right,num-root->right->val,res,p);
			p.pop_back();
		}
	}
};