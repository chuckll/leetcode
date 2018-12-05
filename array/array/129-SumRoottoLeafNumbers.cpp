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
    int sumNumbers(TreeNode* root) {
        vector<vector<int>> result;
		vector<int> f;
		result.push_back(RoofToLeaf(root,f));
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

    vector<int> RoofToLeaf(TreeNode* root, vector<int>& value)
	{
		if(root == NULL)
			return value;
		value.push_back(root->val);
		if(root->left != NULL)
			RoofToLeaf(root->left,value);
	    if(root->right != NULL)
			RoofToLeaf(root->right,value);
        return value;
	}
};