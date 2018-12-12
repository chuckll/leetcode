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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
		if(root == NULL)
			return result;
		queue<TreeNode*> q;
		q.push(root);
		while( !q.empty() )
		{
			int n = q.size();
			vector<int> line;
			for(int i = 0; i < n; i++)
			{
				TreeNode* flag = q.front();
				q.pop();
				line.push_back(flag->val);
				if(flag->left != NULL)
					q.push(flag->left);
				if(flag->right != NULL)
					q.push(flag->right);
			}
			result.push_back(line);
		}
		return result;
    }
};