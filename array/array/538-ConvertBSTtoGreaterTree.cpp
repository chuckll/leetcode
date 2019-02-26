#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;

//https://blog.csdn.net/xiaoyi357/article/details/81051142

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {

public:
	int sum;
    TreeNode* convertBST(TreeNode* root) {
		sum = 0;
		convert(root);
		return root;
    }

	void convert(TreeNode* r)
	{
		if(r == NULL)
			return;
		convert(r->right);
	    r->val += sum;
		sum = r->val;
		convert(r->left);
	}

};