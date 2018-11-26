#include<stdio.h>
#include<vector>
#include<string>
using namespace std;


struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };


class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
		 vector<string> result;
		if(root == NULL)
			return result;
		string s;
		s =  to_string(root->val);
		if(root->left != NULL)
		{
		    TraverlBT(root->left,s,result);
		}
		if(root->right != NULL)
		{
			TraverlBT(root->right,s,result);
		}
        if(root->left == NULL && root->right == NULL)
        {
			result.push_back(s);
		}
		return result;
    }

	void TraverlBT(TreeNode* root,string s, vector<string> &result)
	{
		if(root != NULL)
		{
			s += "->";
			s += to_string(root->val);
		}
		if(root->left != NULL)
		{
			TraverlBT(root->left,s,result);
		}
		if(root->right != NULL)
		{
			TraverlBT(root->right,s,result);
		}
        if(root->left == NULL && root->right == NULL)
        {
			result.push_back(s);
            return;
		}
    }

};