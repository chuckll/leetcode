#include<stdio.h>
#include<vector>
using namespace std;


struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

//满二叉树的节点只能是奇数个数
class Solution {
public:
    vector<TreeNode*> allPossibleFBT(int N) {
		vector<TreeNode*>  ans;
		if(N == 1)
		{
			TreeNode* r = new TreeNode(0);
			ans.push_back(r);
			return ans;
		}
		if( N < 1 || (N % 2 == 0))
		{
			return ans;
		}
		for(int i = 1; i < N; i = i+2)
		{
			vector<TreeNode*> lans = allPossibleFBT(i);
			vector<TreeNode*> rans = allPossibleFBT(N - 1 - i);
			for(int k = 0; k < lans.size(); k++)
				for(int j = 0; j < rans.size(); j++)
				{
					TreeNode* r = new TreeNode(0);
					r->left = lans[k];
					r->right = rans[j];
					ans.push_back(r);
				}
		}
		return ans;
    }
};