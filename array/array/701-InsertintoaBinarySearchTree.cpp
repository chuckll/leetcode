#include<stdio.h>
using namespace std;


struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };


class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL)
		{
			TreeNode* r = new TreeNode(val);
			return r;
		}
		if( root->val < val)
			root->right = insertIntoBST(root->right,val);
		if( root->val > val)
			root->left = insertIntoBST(root->left,val);
	    return root;
	}
};