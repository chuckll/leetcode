#include<stdio.h>
#include<algorithm>
using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	int tryRob(TreeNode* root,int &l,int &r)
	{
		if(root == NULL)
			return 0;
		int ll = 0, lr = 0, rr = 0, rl = 0;
		l = tryRob(root->left,ll,lr);
		r = tryRob(root->right,rr,rl);

		return max(root->val+ll+lr+rr+rl,l+r);
	}

    int rob(TreeNode* root) {
       int l = 0,r = 0;
	   return tryRob(root,l,r);
    }
};