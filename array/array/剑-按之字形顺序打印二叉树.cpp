#include<stdio.h>
#include<queue>
#include<vector>
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
    vector<vector<int>> Print(TreeNode* pRoot) {
        
		vector<vector<int>> res;
		if(pRoot == NULL)
			return res;
		queue<TreeNode*> q;
		q.push(pRoot);
		while(!q.empty())
		{
			int n = q.size();
			vector<int> ans;
			for(int i = 0; i < n; i++)
			{
				TreeNode* f = q.front();
				q.pop();
				ans.push_back(f->val);
				if(f->left != NULL)
					q.push(f->left);
				if(f->right != NULL)
					q.push(f->right);
			}
			res.push_back(ans);
		}
		int n = res.size();
		for(int i = 0; i < n; i++)
		{
			if(i%2 == 1)
			{
				int m = res[i].size();
				for(int j = 0; j < m/2; j++)
				{
					int temp = res[i][j];
					res[i][j] = res[i][m-1-j];
					res[i][m-1-j] = temp; 
				}
			}
		}
		return res;
    }
    
};