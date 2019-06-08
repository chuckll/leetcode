#include<stdio.h>
#include<vector>
#include<stack>
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
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
		vector<TreeNode*> all;
		if(pRootOfTree == NULL)
			return NULL;
		if(pRootOfTree->left == NULL && pRootOfTree->right == NULL)
			return pRootOfTree;
		searchAll(all,pRootOfTree);
		int n = all.size();
		for(int i = 0; i < n; i++)
		{
			TreeNode* f = all[i];
			f->left = all[(i-1+n)%n];
			f->right = all[(i+1)%n];
		}
		return all[0];
    }

	void searchAll(vector<TreeNode*> &all,TreeNode* root)
	{
		if(root->left != NULL)
		    searchAll(all,root->left);
		all.push_back(root);
		if(root->right != NULL)
			searchAll(all,root->right);
	}
};