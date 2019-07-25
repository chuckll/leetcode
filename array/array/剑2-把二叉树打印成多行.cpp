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
        vector<vector<int>> Print(TreeNode* pRoot) {

			vector<vector<int>> res;
			if(pRoot == NULL)
				return res;
			queue<TreeNode*> q;
			q.push(pRoot);
			while(!q.empty())
			{
				int n = q.size();
				vector<int> temp;
				for(int i = 0; i < n; i++)
				{
					TreeNode* f = q.front();
					q.pop();
					if(f->left != NULL)
						q.push(f->left);
					if(f->right != NULL)
						q.push(f->right);

					temp.push_back(f->val);
				}
				res.push_back(temp);
			}
			return res;
        }  
};