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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> result1,result2;
		leafVal(root1,result1);
		leafVal(root2,result2);
		int m = result1.size();
		int n = result2.size();
		if(m != n)
			return false;
		else{
			for(int i = 0; i < m; i++)
			{
				if(result1[i] != result2[i])
					return false;
			}
			return true;
		}
		/*if(result1 == result2)
			return true;
		else
			return false;*/
    }


	void leafVal(TreeNode* root,vector<int> &result)
	{
		if(root->left == NULL && root->right == NULL)
		{
			result.push_back(root->val);
			return;
		}
		if(root->left != NULL)
			leafVal(root->left,result);
		if(root->right != NULL)
			leafVal(root->right,result);
	}
};