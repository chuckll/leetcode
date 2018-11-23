#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;

class Node {
public:
    int val = NULL;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> result;
		if(root == NULL)
			return result;
		queue<Node*> q;
		q.push(root);
		while( !q.empty() )
		{
			int n = q.size();
			vector<int> r;
			for(int i = 0; i < n; i++)
			{
				Node* flag = q.front();
				q.pop();
				r.push_back(flag->val);
				if( flag->children.size() > 0)
				{
					for(int j = 0; j < flag->children.size(); j++)
					{
						q.push(flag->children[j]);
					}
				}
			}
			result.push_back(r);
		}
		return result;
    }
};