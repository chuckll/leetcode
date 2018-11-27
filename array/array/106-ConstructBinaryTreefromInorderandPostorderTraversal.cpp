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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
       int inR = inorder.size() - 1;
	   int postR = postorder.size() - 1;
	   return createTree(0,inR,0,postR,inorder, postorder);
    }

	TreeNode* createTree(int inL,int inR,int postL,int postR,vector<int>& inorder, vector<int>& postorder)
	{
		if(postL > postR)
			return NULL;
 
		TreeNode* root = new TreeNode(postorder[postR]);
		int k;
		for(k = inL; k <= inR; k++)
		{
			if(inorder[k] == root->val)
				break;
		}
		int numleft = k - inL;
		root->left = createTree(inL,k-1,postL,postL+numleft-1,inorder,postorder);
		root->right = createTree(k+1,inR,postL+numleft,postR-1,inorder,postorder);

		return root;
	}
};