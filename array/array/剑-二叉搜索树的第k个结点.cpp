#include<stdio.h>
using namespace std;

//¿´ÁËÌÖÂÛ

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};

class Solution {
	int index = 0;
public:
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
		if(pRoot != NULL)
		{
			TreeNode* p1 = KthNode(pRoot->left,k);
			if(p1 != NULL)
				return p1;
			index++;
			if(index == k)
				return pRoot;
			TreeNode* p2 = KthNode(pRoot->right,k);
			if(p2 != NULL)
				return p2;
		}
		return NULL;
	}
    
};