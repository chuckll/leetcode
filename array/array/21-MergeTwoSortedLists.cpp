#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        vector<int> val;
		ListNode* root = new ListNode(0),*head;
		while(l1 != NULL)
		{
			val.push_back(l1->val);
			l1 = l1->next;
		}
		while(l2 != NULL)
		{
			val.push_back(l2->val);
			l2 = l2->next;
		}
		sort(val.begin(),val.end());
		head = root;
		for(int i =0; i < val.size(); i++)
		{
			ListNode* f =new ListNode(val[i]);
			root->next = f;
			root = root->next;
		}
		return head->next;
    }
};