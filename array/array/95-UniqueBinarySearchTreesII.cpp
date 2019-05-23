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
    vector<TreeNode*> generateTrees(int n) {
		vector<TreeNode*> res;
		if(n == 0)
			return res;
		return generate(1,n);
    }

	vector<TreeNode*> generate(int begin,int end)
	{
		vector<TreeNode*> res;
		if(begin > end)
		{
			res.push_back(NULL);
			return res;
		}

		for(int i = begin; i <= end; i++)
		{
			vector<TreeNode*> left =  generate(begin,i-1);
			vector<TreeNode*> right = generate(i+1,end);

			for(auto l : left)
			{
				for(auto r : right)
				{
					TreeNode* root = new TreeNode(i);
					root->left = l;
					root->right = r;
					res.push_back(root);
				}
			}
		}
		return res;
	}
};