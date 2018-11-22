#include<stdio.h>
#include<vector>
#include<stack>
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
		stack<vector<int>> s;
		queue<TreeNode*> q;
		if(root == NULL)
			return result;
		q.push(root);
		while( !q.empty())
		{
			vector<int> r1;
			int n = q.size();                ////队列堆栈的大小会变化时，赋值在一个变量中，不然会动态变化
			for(int i = 0; i < n; i++)
			{
				TreeNode* flag = q.front();
				q.pop();
				r1.push_back(flag->val);
				if(flag->left != NULL)
				{
					q.push(flag->left);
				}
				if(flag->right != NULL)
				{
					q.push(flag->right);
				}
			}
			s.push(r1);
		}
		int sn = s.size();           ////队列堆栈的大小会变化时，赋值在一个变量中，不然会动态变化
		for(int i = 0;i <sn;i++)
		{
			result.push_back(s.top());
			s.pop();
		}
		return result;
    }
};