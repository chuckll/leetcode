//#include<stdio.h>
//#include<vector>
//#include<stack>
//
//using namespace std;
//
//struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//
//
//class Solution {
//public:
//    vector<int> postorderTraversal(TreeNode* root) {
//		stack<TreeNode*> s;
//		stack<int> output;
//		vector<int> result;
//
//		if(root == NULL)
//			return result;
//
//		s.push(root);
//		while(!s.empty())
//		{
//			TreeNode* flag = s.top();
//			s.pop();
//			output.push(flag->val);
//
//			if(flag->left != NULL)
//			{
//				s.push(flag->left);
//			}
//
//			if(flag->right != NULL)
//			{
//				s.push(flag->right);
//			}
//		}
//
//		while(!output.empty())
//		{
//			result.push_back(output.top());
//			output.pop();
//		}
//		return result;
//    }
//};