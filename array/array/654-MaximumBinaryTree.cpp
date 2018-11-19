//#include<vector>
//#include<algorithm>
//
//
//using namespace std;
//
//
//
//
//  struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  };
//
//class Solution {
//public:
//    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
//        if(nums.size() == 0)
//              return NULL;
//		else if(nums.size() == 1)
//		{
//			TreeNode *first = new TreeNode(nums[0]);
//			return first;
//		}
//        else
//        {
//			int max = 0;
//			for(int i = 0; i < nums.size(); i++)
//			{
//				if(nums[i] > nums[max])
//					max = i;
//			}
//			vector<int>  left,right;
//			for(int i = 0; i < max; i++)
//			{
//				left.push_back(nums[i]);
//			}
//			for(int i = max + 1; i < nums.size(); i++)
//			{
//				right.push_back(nums[i]);
//			}
//			TreeNode *node = new TreeNode(nums[max]);
//			node->left = constructMaximumBinaryTree(left);
//			node->right = constructMaximumBinaryTree(right);
//			return node;
//        }
//    }
//};