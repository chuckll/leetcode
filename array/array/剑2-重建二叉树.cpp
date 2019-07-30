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
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
		return reConstruct(pre,0,pre.size()-1,vin,0,vin.size()-1);
    }

	TreeNode* reConstruct(vector<int> pre,int pBegin,int pEnd,vector<int> vin,int vBegin,int vEnd)
	{
		TreeNode* root;
		if(pBegin > pEnd)
			return NULL;
		int temp = pre[pBegin];
		for(int i = vBegin; i <= vEnd; i++)
		{
			if(vin[i] == temp)
			{
				root = new TreeNode(temp);
				root->left = reConstruct(pre,pBegin+1,pBegin+i-vBegin,vin,vBegin,i-1);
				root->right = reConstruct(pre,pBegin+i-vBegin+1,pEnd,vin,i+1,vEnd);
			}
		}
		return root;
	}
};