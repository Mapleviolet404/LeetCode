//////给定单链表的头节点head，请反转链表，并返回反转后的链表的头节点
//////迭代
////#include <stdio.h>
////
////typedef struct
////{
////	int val;
////	ListNode* next;
////}ListNode;
////
////ListNode* reverse_list(ListNode* head)
////{
////	if (!head) return head;
////	ListNode* curr = head->next;
////	ListNode* prev = head;
////	prev->next = NULL;
////	for (; curr;)
////	{
////		ListNode* temp_node = curr->next;
////		curr->next = prev;
////		prev = curr;
////		curr = temp_node;
////	}
////	return prev;
////}
////
//////你过关（5分钟这一块）
////
////递归做法
////
//#include <stdio.h>
//
//typedef struct
//{
//	int val;
//	ListNode* next;
//}ListNode;
//
//ListNode* reverse_list(ListNode* head)
//{
//	if (!head || !head->next) return head;
//	ListNode* new_head = reverse_list(head->next);
//	head->next->next = head;
//	head->next = NULL;
//	return new_head;
//}
////
////你过关
