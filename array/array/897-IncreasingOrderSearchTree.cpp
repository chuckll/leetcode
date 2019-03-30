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
    TreeNode* increasingBST(TreeNode* root) {
		vector<int> res;
		TreeNode* newRoot,*flag;
		if(root->left != NULL)
		{
			preOrder(root->left,res);
		}
		res.push_back(root->val);
		if(root->right != NULL)
		{
			preOrder(root->right,res);
		}

		newRoot = new TreeNode(res[0]);
		flag = newRoot;
		for(int i = 1; i < res.size(); i++)
		{
			flag->left = new TreeNode(res[i]);
			flag = flag->left;
		}
		return newRoot;
    }

	

	void preOrder(TreeNode* r,vector<int>& res)
	{
		if(r->left != NULL)
		{
			preOrder(r->left,res);
		}
		res.push_back(r->val);
		if(r->right != NULL)
		{
			preOrder(r->right,res);
		}

	}
};