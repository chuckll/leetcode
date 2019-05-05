#include<stdio.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};



//递归排序三部曲：1，快慢指针找中点；2，递归调用mergeSort，3，合并两个链表
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
    }

	ListNode* mergeSort(ListNode* node)
	{
		if(!node || !node->next) return node;
		ListNode* fast = node;
		ListNode* slow = node;
		ListNode* breakN = node;
		while(fast && fast->next)
		{
			fast = fast->next->next;
			breakN = slow;
			slow = slow->next;
		}
		breakN->next = nullptr;
		ListNode* l = mergeSort(node);
		ListNode* r = mergeSort(slow);
		return merge(l,r);
	}


	ListNode* merge(ListNode* l,ListNode* r)
	{
		if(l == nullptr)
			return r;
		if(r == nullptr)
			return l;
		if(l->val < r->val)
		{
			l->next = merge(l->next,r);
			return l;
		}else{

			r->next = merge(l,r->next);
			return r;
		}

	}
};