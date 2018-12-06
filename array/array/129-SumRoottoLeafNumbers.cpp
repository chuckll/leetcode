#include<stdio.h>
#include<vector>
#include<math.h>
using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	vector<vector<int>> result;
    int sumNumbers(TreeNode* root) {
		vector<int> f;
		RoofToLeaf(root,f);
		int sum = 0;

		for(int i = 0 ; i < result.size(); i++)
		{
			int k = result[i].size();
			for(int j = 0; j < k ; j++)
			{
				sum += pow(10,k-1)*result[i][j];

			}
		}
		return sum;
    }

    void RoofToLeaf(TreeNode* root, vector<int> value)
	{
		if(root == NULL)
        {
            return;
        }
		value.push_back(root->val);
        if(root->left != NULL)
           RoofToLeaf(root->left,value);
        if(root->right != NULL)
	       RoofToLeaf(root->right,value);
        if(root->left == NULL && root->right == NULL)
        {
           result.push_back(value);
            return;
        }
	}
};