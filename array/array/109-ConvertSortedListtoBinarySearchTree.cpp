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

	//超出内存限制
	//TreeNode* GenerateTree(TreeNode* root,int left,int right,vector<int> s)
	//{
	//	if(left <= right)
	//	{
	//		int mid = (left + right)  / 2;
	//		root = new TreeNode(s[mid]);
	//		root->left = GenerateTree(root->left,left,mid-1,s);
	//		root->right = GenerateTree(root->right,mid+1,right,s);
	//	}
	//	return root;
	//}



  //  TreeNode* sortedListToBST(ListNode* head) {
  //      vector<int> sort;
		//while(head != NULL)
		//{
		//	sort.push_back(head->val);
		//	head = head->next;
		//}
		//TreeNode* root = NULL;
		//return GenerateTree(root,0,sort.size()-1,sort);
  //  }

	TreeNode* sortedListToBST(ListNode* head) {
           //利用fast 和 slow 指针找到链表中点
        return build(head,NULL);
	}

	TreeNode* build(ListNode* start,ListNode* end)
	{
		if(start == end)
		{
			return NULL;
		}
		ListNode* fast = start;
		ListNode* slow = start;
		while( fast != end && fast->next != end)
		{
			fast = fast->next->next;
			slow = slow->next;
		}
		TreeNode* node = new TreeNode(slow->val);
		node->left = build(start,slow);
		node->right = build(slow->next,end);
		return node;
	}

};