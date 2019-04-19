#include<stdio.h>
#include<math.h>
using namespace std;


 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 


class Solution {
private:
	int ans;
public:
    int distributeCoins(TreeNode* root) {
		  ans = 0;
		  digui(root);  //ºóÐò±éÀú
		  return ans;
	}

	int digui(TreeNode* root)
	{
		int l = 0, r = 0;
		if(root == NULL)
			return 0;
		l = digui(root->left);
		r = digui(root->right);
        ans += abs(l) + abs(r);
		return l + r + root->val - 1;
	}
};