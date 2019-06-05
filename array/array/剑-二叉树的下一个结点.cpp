#include<stdio.h>
#include<vector>
using namespace std;




struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};



class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
		TreeLinkNode* root = pNode;
		vector<TreeLinkNode*> all;
		while(root->next != NULL)
		{
			root = root->next;
		}
		if(root == NULL)
			return NULL;
		search(root,all);
		int i;
		for(i = 0; i < all.size(); i++)
		{
			if(all[i] == pNode)
				break;
		}
		if(i == all.size()-1)
			return NULL;
		return all[i+1];
    }


	void search(TreeLinkNode* root,vector<TreeLinkNode*> &all)
	{
		if(root == NULL)
			return;
		if(root->left == NULL && root->right == NULL)
		{
			all.push_back(root);
			return;
		}
		if(root->left != NULL)
			search(root->left,all);
		all.push_back(root);
		if(root->right != NULL)
			search(root->right,all);
	}








};