//#include<stdlib.h>
//using namespace std;
//
//struct ListNode {
//     int val;
//     ListNode *next;
//	 ListNode(int x) : val(x), next(NULL) {}
// };
// 
//class Solution {
//public:
//    ListNode* insertionSortList(ListNode* head) {
//		if( head == NULL)
//			return head;
//
//		ListNode* helper = new ListNode(0);
//		ListNode* pre = helper;
//		ListNode* cur = head;
//		ListNode* next = NULL;
//
//		while(cur != NULL)
//		{
//			next = cur->next;
//			while(pre->next != NULL && pre->next->val < cur->val)
//			{
//				pre = pre->next;
//			}
//			cur->next = pre->next;
//			pre->next = cur;
//			pre = helper;
//			cur = next;
//		}
//		return pre->next;
//    }
//};