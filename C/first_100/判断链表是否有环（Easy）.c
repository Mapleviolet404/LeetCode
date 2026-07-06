//#include <stdio.h>
//
//typedef enum bool
//{
//	false,
//	true
//}bool;
//
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//
//bool has_cycle(ListNode* head)
//{
//	//创建快慢指针
//	ListNode* slow = head;
//	ListNode* fast = head;
//	for (;fast && slow && fast->next;)
//	{
//		slow = slow->next;				//一次走一步
//		fast = fast->next->next;		//一次走两步
//		if (slow == fast)				//如果相遇就证明有环
//		{
//			return true;
//		}
//		if (!fast)						//赋值之后，为空证明到头了，为单向链表
//		{
//			return false;
//		}
//	}
//	return false;						//当fast->next为空的时候这时候链表长度为奇数，for里面没有return，故补充
//}
//
////你过关