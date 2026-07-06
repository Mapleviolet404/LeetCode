//#include <stdio.h>
//
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//
//ListNode* delete_duplicates(ListNode* head) 
//{
//	//哨兵结点
//	ListNode dummy;
//	// 用于指向结点的末尾(工作结点)
//	ListNode* cur = &dummy;
//	if (!head)
//	{
//		return head;
//	}
//	while (head)
//	{
//		cur->next = head;
//		cur = cur->next;
//		head = head->next;
//		//执行删除操作
//		while (head && cur->val == head->val)		//head == cur->next
//		{
//			ListNode* temp = head;
//			cur->next = head->next;
//			head = head->next;
//			free(temp);
//		}
//	}
//	return dummy.next;
//}
////你过关
//
////更好的做法中不需要dummy结点哦
////你自己都知道head->next = cur->next->next，所以只需要cur动就可以了，head保留，最后返回head就可以
