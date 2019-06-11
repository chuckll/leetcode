#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;


struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
		vector<int> res;
		queue<TreeNode*> q;
		if(root == NULL)
			return res;
		q.push(root);
		while(!q.empty())
		{
			int n = q.size();
			for(int i =0; i < n; i++)
			{
				TreeNode* f = q.front();
				q.pop();
				res.push_back(f->val);
				if(f->left != NULL)
					q.push(f->left);
				if(f->right != NULL)
					q.push(f->right);
			}
		}
		return res;
    }
};