#include<stdio.h>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};
class Solution {
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
		if(pHead1 == NULL && pHead2 == NULL)
			return NULL;
		int p1 = 0, p2 = 0;
		ListNode* head1 = pHead1, *head2 = pHead2;
		while(head1 != NULL)
		{
			head1 = head1->next;
			p1++;
		}
		while(head2 != NULL)
		{
			head2 = head2->next;
			p2++;
		}
		if(p1 > p2)
		{
			for(int i = 0; i < p1-p2; i++)
				pHead1 = pHead1->next;
		}else if(p1 < p2)
		{
			for(int i = 0; i < p2-p1; i++)
				pHead2 = pHead2->next;
		}

		while(pHead1)
		{
			if(pHead1 == pHead2)
				return pHead1;
			else{
				pHead1 = pHead1->next;
				pHead2 = pHead2->next;
			}
		}

       return NULL;

    }
};