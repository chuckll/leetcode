#include<stdio.h>
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
    void Mirror(TreeNode *pRoot) {
		if(pRoot != NULL)
		{
			TreeNode* f = pRoot->left;
			pRoot->left = pRoot->right;
			pRoot->right = f;
			Mirror(pRoot->left);
			Mirror(pRoot->right);
		}
    }
};