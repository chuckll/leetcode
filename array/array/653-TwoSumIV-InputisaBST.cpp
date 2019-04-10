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
    bool findTarget(TreeNode* root, int k) {
		vector<int> list;
        digui(root,list);
		for(int i = 0; i < list.size(); i++)
		{
			int other = k - list[i];
			for(int j = list.size() - 1; j >= 0; j--)
			{
				if(list[j] == other && j != i)
					return true;
			}
		}
		return false;
    }

	void digui(TreeNode* root,vector<int> &list)
	{
		if(root == NULL)
			return;
		digui(root->right,list);
		list.push_back(root->val);
		digui(root->left,list);
	}
};