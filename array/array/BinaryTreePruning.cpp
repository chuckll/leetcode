//#include<stdio.h>
//
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//
//class Solution {
//public:
//	TreeNode* pruneTree(TreeNode* root) {
//		if(root == NULL)
//			return NULL;
//		else{
//			if(root->val == 0 && root->left == NULL && root->right == NULL)
//				return NULL;
//			else{
//				root->left = pruneTree(root->left);
//				root->right = pruneTree(root->right);
//				return root;
//			}
//		}
//	}
//};