//#include <stdio.h>
//
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//
//ListNode* partition(ListNode* head, int x)
//{
//	if (!head || !head->next) return head;
//	//创建两个新链表，一个存放<x，另一个存放>x
//	ListNode* lower = NULL;
//	ListNode* higher = NULL;
//	ListNode dummy_lower;
//	ListNode dummy_higher;
//	ListNode dummy;
//	dummy.next = head;
//	while (head)
//	{
//		if (head->val < x && !lower)
//		{
//			lower = head;
//			dummy_lower.next = head;
//		}
//		else if (head->val >= x && !higher)
//		{
//			higher = head;
//			dummy_higher.next = head;
//		}
//		if (higher && lower)
//		{
//			head = dummy.next;
//			break;
//		}
//		head = head->next;
//	}
//	//分配给两个链表
//	while (head)
//	{
//		if (head->val < x && head != dummy_lower.next)
//		{
//			lower->next = head;
//			lower = lower->next;
//		}
//		else if (head->val >= x && head != dummy_higher.next)
//		{
//			higher->next = head;
//			higher = higher->next;
//		}
//		head = head->next;
//	}
//	//合并两个链表
//	if (lower && higher)
//	{
//		higher->next = NULL;
//		lower->next = dummy_higher.next;
//		return dummy_lower.next;
//	}
//	return dummy.next;
//}
//
////你过关


////更优的做法
//#include <stdio.h>
//
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//
//ListNode* partition(ListNode* head, int x)
//{
//	ListNode less_dummy = { 0, NULL }, greater_dummy = { 0, NULL };
//	ListNode* less = &less_dummy, *greater = &greater_dummy;
//	//分配
//	while (head)
//	{
//		if (head->val < x)
//		{
//			less->next = head;
//			less = less->next;
//		}
//		else
//		{
//			greater->next = head;
//			greater = greater->next;
//		}
//		head = head->next;
//	}
//
//	greater->next = NULL;
//	less->next = greater_dummy.next;
//	return less_dummy.next;
//}
