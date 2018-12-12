#include<stdio.h>
#include<vector>
#include<map>
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
	typedef pair<int,int> pii;
	bool static cmp(pii a,pii b)
	{
		return a.second > b.second;
	}
    vector<int> findFrequentTreeSum(TreeNode* root) {
		vector<int> result;
		vector<int> output;
		if(root == NULL)
			return output;
		findSum(root,result);
		map<int,int> count;
		vector<pii> v;
		for(int i = 0; i < result.size(); i++)
		{
			map<int,int>::iterator it;
			it = count.find(result[i]);
			if(it != count.end())
			{
				it->second++;
			}else{
				count.insert(pii(result[i], 0));
			}
		}
		map<int,int>::iterator mit;
		for(mit = count.begin(); mit != count.end(); mit++)
		{
			v.push_back(pii(mit->first,mit->second));
		}
		sort(v.begin(),v.end(),cmp);
		output.push_back(v[0].first);
		for(int i =1; i < v.size(); i++)
		{
			if(v[i].second == v[0].second)
				output.push_back(v[i].first);
		}
		return output;
    }

	int findSum(TreeNode* root,vector<int>& result)
	{
		if( root->left == NULL && root->right == NULL)
		{
			result.push_back(root->val);
			return root->val;
		}
		if( root->left != NULL && root->right == NULL)
		{
			int flag = findSum(root->left,result) + root->val;
			result.push_back(flag);
			return flag;
			
		}
		if( root->left == NULL && root->right != NULL)
		{
			int flag = findSum(root->right,result) + root->val;
			result.push_back(flag);
			return flag;
		}
		if( root->left != NULL && root->right != NULL)
		{
			int flag = findSum(root->left,result) + findSum(root->right,result) + root->val;
			result.push_back(flag);
			return flag;
		}
	}
};