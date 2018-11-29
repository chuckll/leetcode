#include<stdio.h>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
		queue<TreeNode*> q;
		if(root == NULL)
			return result;
		q.push(root);
		stack<TreeNode*> s;
		while(!q.empty())
		{
			TreeNode* flag = q.front();
			q.pop();
			result.push_back(flag->val);
			if(flag->left != NULL)
			{
				q.push(flag->left);
			}
			if(flag->right != NULL)
			{
				s.push(flag->right);
			}
			if(q.empty() && !s.empty())
			{
				q.push(s.top());
				s.pop();
			}
		}
		return result;	
    }
};