#include<stdio.h>
#include<vector>
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		vector<TreeNode*> pAncestor,qAncestor,road;
		vector<vector<TreeNode*>> all;
		findAllRoads(root,road,all);
		pAncestor = findRoad(all,p);
		qAncestor = findRoad(all,q);
		int i,j;
		for(i = 0, j = 0; i < pAncestor.size() && j < qAncestor.size(); i++,j++)
		{
			if(pAncestor[i] != qAncestor[j])
				return pAncestor[i-1];
		}
		return pAncestor[min(i-1,j-1)];
    }


	vector<TreeNode*> findRoad(vector<vector<TreeNode*>> all,TreeNode* p)
	{
		vector<TreeNode*> result;
		for(int i = 0; i < all.size(); i++)
		{
			for(int j = 0; j < all[i].size(); j++)
			{
				if(all[i][j] == p)
				{
					for(int k = 0; k <= j; k++)
					{
						result.push_back(all[i][k]);
					}
					return result;
				}
			}
		}
	}


	void findAllRoads(TreeNode* root,vector<TreeNode*> road,vector<vector<TreeNode*>> &all)
	{
		if(root != NULL)
		{
			road.push_back(root);
		}
		if(root->left != NULL)
		{
			findAllRoads(root->left,road,all);
		}
		if(root->right != NULL)
		{
			findAllRoads(root->right,road,all);
		}
		if(root->left == NULL && root->right == NULL)
		{
			all.push_back(road);
			return;
		}
	}
};


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if(root == NULL || root == p || root == q)
			return root;

		TreeNode* left = lowestCommonAncestor(root->left,p,q);
		TreeNode* right = lowestCommonAncestor(root->right,p,q);

		if(left == NULL)
			return right;
		else if(right == NULL)
			return left;
		else
			return root;

	}
};