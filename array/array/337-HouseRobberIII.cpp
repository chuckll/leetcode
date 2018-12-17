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
    int rob(TreeNode* root) {
        if(root == NULL)
			return 0;
		queue<TreeNode*> q;
		int m1 = 0, m2 = 0;
		int times = 1;
		q.push(root);
		while(!q.empty())
		{
			int n = q.size();
			for(int i = 0; i < n; i++)
			{
				TreeNode* flag = q.front();
				q.pop();
				if(times == 1)
				{
					m1 += flag->val;
				}
				if(times == 2)
				{
					m2 += flag->val;
				}
				if(flag->left != NULL)
					q.push(flag->left);
				if(flag->right != NULL)
					q.push(flag->right);
			}
			if(times == 1)
				times = 2;
			else
				times = 1;
		}
		return max(m1,m2);
    }
};