//#include <stdio.h>
//#include <math.h>
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
////void swap(int* a, int* b)
////{
////	int temp = *a;
////	*a = *b;
////	*b = temp;
////}
////
////ListNode* sort_list(ListNode* head)
////{
////	//结点为空则返回结点本身，即NULL
////	if (!head) return head;
////	ListNode* cur = head;
////	int len = get_list_len(head);
////	//冒泡排序
////	for (int i = 0; i < len - 1; i++)
////	{
////		//每次最大的到达末端重置工作节点
////		cur = head;
////		for (int j = 0; j < len - (i + 1); j++)
////		{
////			//把大的放后面
////			if (cur->val > cur->next->val)
////			{
////				swap(&cur->val, &cur->next->val);
////			}
////			//工作结点前进
////			cur = cur->next;
////		}
////	}
////	return head;
////}
//
////获取某个数在某一位上的数字
//int get_digit(int num, int pos)
//{
//	while (--pos > 0) num /= 10;
//	return num % 10;
//}
//
////获取链表中最大数的位数
//int get_max_digit(ListNode* head, int len)
//{
//	int max = abs(head->val);
//	for (int i = 0; i < len - 1; i++)
//	{
//		if (max < abs(head->next->val)) max = abs(head->next->val);
//		head = head->next;
//	}
//
//	int digit = 0;
//	while (max != 0)
//	{
//		digit++;
//		max /= 10;
//	}
//	return digit;
//}
//
//ListNode* sort_list(ListNode* head)
//{
//	if (!head) return head;
//	int len = get_list_len(head);
//	int max_digit = get_max_digit(head, len);	//最大位数
//	ListNode* buckets[19];						//十九个的头指针
//	ListNode* buckets_tail[19];					//十九个桶的尾指针
//
//	for (int pos = 1; pos <= max_digit; pos++)
//	{
//		//清空桶，依次对每一位进行排序
//		for (int i = 0; i < 19; i++)
//		{
//			buckets[i] = NULL;
//			buckets_tail[i] = NULL;
//		}
//
//		//分配阶段：将每个元素放入对应的桶中
//		ListNode* cur = head;
//		while (cur)
//		{
//			int digit = get_digit(cur->val, pos);
//			if (buckets[digit + 9] == NULL)
//			{
//				buckets[digit + 9] = cur;
//			}
//			else
//			{
//				buckets_tail[digit + 9]->next = cur;
//			}
//			buckets_tail[digit + 9] = cur;
//			cur = cur->next;
//		}
//
//		//收集阶段：按桶的顺序重新收集数据
//		ListNode* new_head = NULL;
//		ListNode* new_tail = NULL;
//		for (int i = 0; i < 19; i++) 
//		{
//			if (buckets[i]) 
//			{
//				if (!new_head)
//				{
//					new_head = buckets[i];
//				}
//				else
//				{
//					new_tail->next = buckets[i];
//				}
//				new_tail = buckets_tail[i];
//			}
//		}
//
//		// 截断链表末尾
//		if (new_tail) new_tail->next = NULL;
//		head = new_head;
//	}
//	return head;
//}
// 
////你过关
