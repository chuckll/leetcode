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
	int index = 0;
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
		if(pRoot == NULL)
			return NULL;
		TreeNode* left = KthNode(pRoot->left,k);
		if(left != NULL)
			return left;
		index++;
		if(index == k)
			return pRoot;
		TreeNode* right = KthNode(pRoot->right,k);
		if(right != NULL)
			return right;

	}
    
};