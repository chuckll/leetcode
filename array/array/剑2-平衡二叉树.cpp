#include<stdio.h>
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
    bool IsBalanced_Solution(TreeNode* pRoot) {
		if(pRoot == NULL)
			return true;

		return ((abs(depth(pRoot->left) - depth(pRoot->right)) <= 1) &&
			IsBalanced_Solution(pRoot->left) && IsBalanced_Solution(pRoot->right));
    }

	int depth(TreeNode* pRoot)
	{
		if(pRoot == NULL)
			return 0;
		else
			return max(depth(pRoot->left),depth(pRoot->right))+1;
	}
};