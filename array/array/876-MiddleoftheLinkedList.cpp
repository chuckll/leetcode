#include<stdio.h>
using namespace std;



struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
		ListNode* next;
		if(head->next == NULL)
			return head;
		next = head->next;
		while(next != NULL)
		{
		   if(next->next != NULL)
		   {
			next = next->next->next;
		   }else{
			   next = next->next;
		   }
		   head = head->next;
		}
		return head;
    }
};