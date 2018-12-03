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
    vector<int> largestValues(TreeNode* root) {
        vector<int> result;
		queue<TreeNode*> q;
		if(root == NULL)
			return result;
		q.push(root);
		while(!q.empty())
		{
			int n = q.size();
			int max = q.front()->val;
			for(int i = 0; i < n; i++)
			{
				TreeNode* flag = q.front();
				q.pop();
				if(flag->val > max)
					max = flag->val;
				if(flag->left != NULL)
					q.push(flag->left);
				if(flag->right != NULL)
					q.push(flag->right);
			}
			result.push_back(max);
		}
		return result;
    }
};