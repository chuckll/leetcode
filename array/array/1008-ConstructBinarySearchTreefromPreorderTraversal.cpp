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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
		TreeNode* root = new TreeNode(preorder[0]);
		for(int i = 1; i < preorder.size(); i++)
		{
			TreeNode* f = root,*last = root;
			while(f!=NULL)
			{
				last = f;
				if(preorder[i] < f->val)
					f = f->left;
				else
					f = f->right;
			}
			TreeNode* n = new TreeNode(preorder[i]);
			if(preorder[i] < last->val)
				last->left = n;
			else
				last->right = n;
		}
		return root;
    }
};