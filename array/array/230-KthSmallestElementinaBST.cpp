#include<stdio.h>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> result;
		if(root == NULL)
			return 0;
		
		queue<TreeNode*> q;
		q.push(root);

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
				q.push(flag->right);
			}
		}

		sort(result.begin(),result.end());
		return result[k-1];
    }
};