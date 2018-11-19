//#include<stdio.h>
//#include<vector>
//
//using namespace std;
//
//struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//
//class Solution {
//public:
//    vector<int> inorderTraversal(TreeNode* root) {
//        vector<int> result;
//		if(root != NULL)
//		     inorder(root,result);
//		return result;
//    }
//
//	void inorder(TreeNode* root,vector<int> &result)
//	{
//		if(root->left != NULL)
//		     inorder(root->left,result);
//		result.push_back(root->val);
//		if(root->right != NULL)
//		     inorder(root->right,result);
//	}
//};