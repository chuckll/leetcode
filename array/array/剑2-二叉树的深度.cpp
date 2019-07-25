#include<stdio.h>
#include<queue>
using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};
class Solution {
public:
    int TreeDepth(TreeNode* pRoot)
    {
		if(pRoot == NULL)
			return 0;
		queue<TreeNode*> q;
		q.push(pRoot);
		int depth = 0;
		while(!q.empty())
		{
			int s = q.size();
			depth++;
			for(int i = 0; i < s; i++)
			{
				TreeNode* temp = q.front();
				q.pop();
				if(temp->left)
					q.push(temp->left);
				if(temp->right)
					q.push(temp->right);
			}
		}
		return depth;
    }
};