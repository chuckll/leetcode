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
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
		if(pHead == NULL || pHead->next == NULL || pHead->next->next == NULL)
			return NULL;
		ListNode* slow = pHead->next;
		ListNode* fast = slow->next;
		while(slow != fast)
		{
			slow = slow->next;
			fast = fast->next->next;
		}
		ListNode* temp = pHead;
		while(temp != slow)
		{
			temp = temp->next;
			slow = slow->next;
		}
		return slow;

    }
};