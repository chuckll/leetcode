#include<stdio.h>
#include<vector>
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
		if(nums.size() < 1)
		{
			return NULL;
		}
		else if(nums.size() == 1)
		{
			TreeNode* root = new TreeNode(nums[0]);
			return root;
		}
			int mid = nums.size()/2;
			TreeNode* root = new TreeNode(nums[mid]);
			vector<int> subLeft(nums.begin(),nums.begin() + mid);
			vector<int> subRight(nums.begin() + mid + 1,nums.end());
			root->left = sortedArrayToBST(subLeft);
			root->right = sortedArrayToBST(subRight);
			return root;
    }
};