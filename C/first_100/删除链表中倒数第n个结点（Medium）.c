//#include <stdio.h>
//
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//
//int get_list_len(ListNode* head)
//{
//	int len = 0;
//	while (head)
//	{
//		len++;
//		head = head->next;
//	}
//	return len;
//}
//
//ListNode* remove_nth_from_end(ListNode* head, int n)
//{
//	if (!head || !head->next)
//	{
//		//如果一定删除一个的话，那么只有一个元素或者没有都是为空返回
//		return NULL;
//	}
//	//建立一个工作结点
//	ListNode* cur = head;
//	//建立前驱
//	ListNode* pred = NULL;
//	//获取长度
//	int len = get_list_len(head);
//	int from_head = len - n;
//	for (int i = 0; i < from_head; i++)
//	{
//		if (i == from_head - 1)
//		{
//			pred = cur;
//		}
//		cur = cur->next;
//	}
//	if (!pred)
//	{
//		pred = head->next;
//		cur = NULL;
//		return pred;
//	}
//	pred->next = cur->next;
//	cur = NULL;
//	return head;
//}
//
////你过关