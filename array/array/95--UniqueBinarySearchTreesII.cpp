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
		res = gen(1,n);
		return res;
    }

	vector<TreeNode*> gen(int begin,int end)
	{
		vector<TreeNode*> res;
		if(begin > end)
		{
			res.push_back(NULL);
			return res;
		}
		for(int i = begin; i <= end; i++)
		{

			vector<TreeNode*> left = gen(begin,i-1);
			vector<TreeNode*> right = gen(i+1,end);
			for(int j = 0; j < left.size(); j++)
			{
				for(int k = 0; k < right.size(); k++)
				{
					TreeNode* root = new TreeNode(i);
					root->left = left[j];
					root->right = right[k];
					res.push_back(root);
				}
			}
		}
		return res;
	}
};