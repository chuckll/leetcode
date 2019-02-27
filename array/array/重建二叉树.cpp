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
        TreeNode* root =  Construct(pre,vin,0,pre.size()-1,0,vin.size()-1);
        return root;
	}
    
    TreeNode* Construct(vector<int> pre, vector<int> vin,int prel,int prer,int vinl,int vinr)
    {
        if(prel > prer)
		{
			return NULL;
		}
		TreeNode* root = new TreeNode(pre[prel]);
		int i;
		for(i = vinl; i <= vinr; i++)
		{
			if(vin[i] == root->val)
			{
				break;
			}
		}
		int leftNum = i - vinl;
		root->left = Construct(pre,vin,prel+1,prel+leftNum,vinl,i-1);
		root->right = Construct(pre,vin,prel+leftNum+1,prer,i+1,vinr);
		return root;
	
    }
};