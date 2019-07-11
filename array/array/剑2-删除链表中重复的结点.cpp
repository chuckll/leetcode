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
    ListNode* deleteDuplication(ListNode* pHead)
    {
		if(pHead == NULL || pHead->next == NULL)
			return pHead;
		if(pHead->val == pHead->next->val)
		{
			ListNode* temp = pHead->next->next;
			while((temp != NULL) && (temp->val == pHead->val))
			{
				temp = temp->next;
			}
			return deleteDuplication(temp);
		}else{
			pHead->next = deleteDuplication(pHead->next);
			return pHead;
		}
    }
};