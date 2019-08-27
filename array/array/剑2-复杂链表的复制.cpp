#include<stdio.h>

using namespace std;


struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};

class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
		RandomListNode* head = pHead;
		while(head)
		{
			RandomListNode* node = new RandomListNode(head->label);
			RandomListNode* temp = head->next;
			head->next = node;
			node->next = temp;
			head = temp;
		}
		head = pHead;
		while(head)
		{
			RandomListNode* temp = head->next;
			if(head->random)
			temp->random = head->random->next;
			head = temp->next;
		}

	

		RandomListNode *pCloneHead = pHead->next;
        RandomListNode *res;
        head = pHead;
        while(head->next){
            res = head->next;
            head->next =res->next;
            head = res;
        }
		return pCloneHead;
    }
};