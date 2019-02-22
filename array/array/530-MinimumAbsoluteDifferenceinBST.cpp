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
    int getMinimumDifference(TreeNode* root) {
        vector<int> nums;
		queue<TreeNode*> q;
		q.push(root);
		while(!q.empty())
		{
			TreeNode* f = q.front();
			q.pop();
			nums.push_back(f->val);
			if(f->left != NULL)
				q.push(f->left);
			if(f->right != NULL)
				q.push(f->right);
		}
		int n = nums.size();
		int min = abs(nums[0] - nums[1]);
		for(int i = 0; i < n; i++)
		{
			for(int j = i+1; j < n; j++)
			{
				int sub = abs(nums[i] - nums[j]);
				if(sub < min)
					min = sub;
			}
		}
		return min;
    }
};