#include<stdio.h>

using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};

//��������
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
		if(pHead == NULL || pHead->next == NULL)
			return pHead;
		if(pHead->val == pHead->next->val)
		{
			ListNode* node = pHead->next;
			while((node != NULL) && node->val == pHead->val)
			{
				node = node->next;
			}
			return deleteDuplication(node);
		}else{

			pHead->next = deleteDuplication(pHead->next);
			return pHead;
		}
    }
};