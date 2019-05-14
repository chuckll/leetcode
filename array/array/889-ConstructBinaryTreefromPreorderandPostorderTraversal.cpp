#include<stdio.h>
#include<vector>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:

	TreeNode* dfs(vector<int> pre,int begin1,int end1,vector<int> post,int begin2,int end2)
	{
		if(begin1 > end1 && begin2 > end2)
			return NULL;
		if(begin1 == end1 && begin2 == end2)
		{
			TreeNode* root = new TreeNode(pre[begin1]);
			return root;
		}
		TreeNode* root = new TreeNode(pre[begin1]);
		int i;
		for(i = begin2; i <= end2; i++)
		{
			if(post[i] == pre[begin1+1])
			{
				break;
			}
		}
		root->left = dfs(pre,begin1+1,begin1+1+i-begin2,post,begin2,i);
		root->right = dfs(pre,begin1+2+i-begin2,end1,post,i+1,end2-1);
		return root;
	}


    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        int n = pre.size();
		return dfs(pre,0,n-1,post,0,n-1);
    }
};