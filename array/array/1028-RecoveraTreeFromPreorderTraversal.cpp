#include<stdio.h>
#include<string>
#include<vector>
using namespace std;




struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };



 
class Solution {
public:
	struct node{
		int number;
		int deep;
		node(int x,int y): number(x),deep(y){}
   };

	TreeNode* digui(vector<node> nodes,int start,int end)
	{
		if(start > end)
			return NULL;
		int leftNodes = end+1;
		int depth = nodes[start].deep;
		for(int i = start + 2; i <= end; i++)
		{
			if(nodes[i].deep == depth+1)
			{
				leftNodes = i;
				break;
			}
		}

		TreeNode* root = new TreeNode(nodes[start].number);
		root->left = digui(nodes,start+1,leftNodes-1);
		root->right = digui(nodes,leftNodes,end);

		return root;
	}
    
	TreeNode* recoverFromPreorder(string S) {
		TreeNode* root;
		vector<node> res;
		int count = 0;
		int start = 0;
		bool isStart = false;
		bool isFinish = false;
		for(int i = 0; i < S.size(); i++)
		{
			if(S[i] != '-' && isStart == false)
			{
				isStart = true;
				start = i;
				isFinish = false;
			}else if(S[i] == '-' && isFinish == false){
				int num = stoi(S.substr(start,i-start));
				node ps(num,count);
				res.push_back(ps);
				count = 1;
				isFinish = true;
				isStart = false;
			}else if(S[i] == '-')
			{
				count++;
			}
		}
		int num = stoi(S.substr(start));
		node ps(num,count);
		res.push_back(ps);

		return digui(res,0,res.size() - 1);
    }
};