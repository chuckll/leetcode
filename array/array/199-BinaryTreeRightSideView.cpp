#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;

//求每层最后一个数
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };


class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
		if(root == NULL)
			return result;
		queue<TreeNode*> q;
		q.push(root);
		while(!q.empty())
		{
			int n = q.size();
			for(int i = 0; i < n; i++)
			{
				TreeNode* flag = q.front();
				q.pop();
				if(flag->left != NULL)
					q.push(flag->left);
				if(flag->right != NULL)
					q.push(flag->right);
				if(i == n-1)
				{
					result.push_back(flag->val);
				}
			}
		}
		return result;
    }
};
