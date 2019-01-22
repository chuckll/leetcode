#include<stdio.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
		ListNode* next;
		if(head == NULL)
			return head;
		if(head->next != NULL)
			next = head->next;
		else
			next = NULL;
		ListNode* forhead = NULL;
		while(next != NULL)
		{
			head->next = forhead;
			forhead = head;
			head = next;
			next = next->next;
		}
		head->next = forhead;
		return head;
    }
};