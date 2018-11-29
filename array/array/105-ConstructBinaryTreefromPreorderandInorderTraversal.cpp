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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
		int m = preorder.size();
		int n = inorder.size();
		TreeNode* root = preInBT(0,m-1,0,n-1,preorder,inorder);
		return root;
    }

	TreeNode* preInBT(int preL,int preR,int inL,int inR,vector<int>& preorder,vector<int>& inorder)
	{
		if(preL > preR)
			return NULL;
		TreeNode* root = new TreeNode(preorder[preL]);
		int i;
		for(i = inL; i < inR;i++)
		{
			if(inorder[i] == root->val)
				break;
		}
		int num = i - inL;
		root->left = preInBT(preL+1,preL+num,inL,i-1,preorder,inorder);
		root->right = preInBT(preL+num+1,preR,i+1,inR,preorder,inorder);
		return root;
	}
};