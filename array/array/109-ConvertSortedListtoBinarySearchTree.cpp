#include<stdio.h>
#include<vector>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:

	TreeNode* GenerateTree(int left,int right,vector<int> s)
	{
			TreeNode* r;
			int mid = (left + right)/2;
			r->val = s[mid];
			if(left <= mid-1)
			{
			    r->left = GenerateTree(left,mid-1,s);
			}else
			{
				return r;
			}
			if(mid+1 <= right)
			{
			    r->right = GenerateTree(mid+1,right,s);
			}else
			{
				return r;
			}
			return r;
	}



    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> sort;
		while(head != NULL)
		{
			sort.push_back(head->val);
			head = head->next;
		}
		TreeNode* root = GenerateTree(0,sort.size()-1,sort);
		return root;
    }
};