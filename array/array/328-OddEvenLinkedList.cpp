
#include<stdio.h>
using namespace std;



 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL)
			return NULL;
		ListNode* p = head;
		if(head->next == NULL)
			return p;
		ListNode* q = head->next, *second = head->next;
		int number = 0;
		while(q->next != NULL)
		{
			p->next = q->next;
			ListNode* f = p;
			p = q;
			q = f->next;
			number++;
		}
		if(number % 2 == 1)
		{
			p->next = q->next;
			q->next = second;
		}else{
			p->next = second;
		}
		return head;
    }
};