//#include<stdio.h>
//using namespace std;
//
//struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//
//
//class Solution {
//public:
//    TreeNode* invertTree(TreeNode* root) {
//		if (root == NULL)
//			return NULL;
//		if(root->left == NULL && root->right == NULL)
//			return root;
//		else{
//
//			TreeNode *flag;
//			flag = invertTree(root->left);
//			root->left = invertTree(root->right);
//			root->right = flag;
//			return root;
//		}
//    }
//};