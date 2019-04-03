#include<stdio.h>
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
    int minDiffInBST(TreeNode* root) {
		vector<int> res;
        queue<TreeNode*> q;
		if(root != NULL)
			q.push(root);
		while(!q.empty())
		{
			TreeNode* flag = q.front();
			q.pop();
			res.push_back(flag->val);
			if(flag->left != NULL)
			{
				q.push(flag->left);
			}
			if(flag->right != NULL)
			{
				q.push(flag->right);
			}
		}
		sort(res.begin(),res.end());
		int min = res[1] - res[0];
		for(int i = 1; i < res.size(); i++)
		{
			int dis = res[i] - res[i-1];
			if(dis < min)
			{
				min = dis;
			}
		}
		return min;
    }
};