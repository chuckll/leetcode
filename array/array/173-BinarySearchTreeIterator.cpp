#include<stdio.h>
#include<queue>
#include<vector>
using namespace std;




 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class BSTIterator {
public:
    BSTIterator(TreeNode *root) {
        if(root != NULL)
		{
		queue<TreeNode*> q;
		q.push(root);
		while(!q.empty())
		{
			TreeNode* flag = q.front();
			vValue.push_back(flag->val);
			q.pop();
			if(flag->left != NULL)
				q.push(flag->left);
			if(flag->right != NULL)
				q.push(flag->right);
		}
		sort(vValue.begin(),vValue.end());
		nowP = -1;
		}
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
		if(vValue.size() > 0)
		{
			if(nowP < vValue.size()-1)
				return true;
			else
				return false;
		}else{
			return false;
		}
    }

    /** @return the next smallest number */
    int next() {
		return vValue[++nowP];
    }

	vector<int> vValue;
	int nowP;
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */