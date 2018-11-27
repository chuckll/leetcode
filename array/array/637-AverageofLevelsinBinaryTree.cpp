#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };



class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
		if(root == NULL)
			return result;
		queue<TreeNode*> q;
		q.push(root);

		while(!q.empty())
		{
			int n = q.size();
			double s = 0;
			for(int i = 0;i < n; i++)
			{
				TreeNode* flag = q.front();
				q.pop();
				if( flag->left != NULL)
					q.push(flag->left);
				if( flag->right != NULL)
					q.push(flag->right);
				s += flag->val;
			}
			s /= n;
			result.push_back(s);
		}

		return result;

    }
};