#include<stdio.h>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

//层次遍历,每次去每层的第一个
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        if(root == NULL)
			return 0;

		queue<TreeNode*> q;
		q.push(root);
		int result = 0;

		while( !q.empty() )
		{
			result = q.front()->val;
			for(int i = q.size(); i > 0; i--)
			{
				TreeNode* flag = q.front();
				q.pop();

				if(flag->left != NULL)
					q.push(flag->left);

				if(flag->right != NULL)
					q.push(flag->right);
			}
		}

		return result;
    }
};