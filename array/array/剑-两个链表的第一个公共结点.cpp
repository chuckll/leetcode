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
		int len1 = findLength(pHead1);
		int len2 = findLength(pHead2);
		int dis;
		if(len1 > len2)
		{
			dis = len1 - len2;
			while(dis != 0)
			{
				pHead1 = pHead1->next;
				dis--;
			}
		}else{
			dis = len2 - len1;
			while(dis != 0)
			{
				pHead2 = pHead2->next;
				dis--;
			}
		}

		while(pHead1 != NULL)
		{
			if(pHead1 == pHead2 )
				return pHead1;
			pHead1 = pHead1->next;
			pHead2 = pHead2->next;

		}

		return NULL;


    }

	int findLength(ListNode* pHead)
	{
		int len = 0;
		while(pHead != NULL)
		{
			len++;
			pHead = pHead->next;
		}
		return len;
	}
};