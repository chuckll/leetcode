#include<stdio.h>
#include<string>
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
    char* Serialize(TreeNode *root) {    
        
		if(root == NULL)
			return NULL;
		queue<TreeNode*> q;
		string s;
		q.push(root);
		bool notNULL = true;
		while(notNULL)
		{
			int n = q.size();
			notNULL = false;
			for(int i = 0; i < n; i++)
			{
			   TreeNode* f = q.front();
			   q.pop();
			   if(f != NULL)
				   s.append(to_string(f->val));
			   else
				   s.append("#");
			   if(f->left != NULL || f->right != NULL)
				   notNULL = true;
			   q.push(f->left);
			   q.push(f->right);
			}
		}
		return s.c_str;
    }



    TreeNode* Deserialize(char *str) {
		
    
    }
};