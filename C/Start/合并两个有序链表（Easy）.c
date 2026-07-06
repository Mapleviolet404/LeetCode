///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     struct ListNode *next;
// * };
// */
//#include <stdio.h>
//
//typedef struct ListNode {
//	int val;
//	struct ListNode* next;
//	
//}ListNode;
//
//int list_find(ListNode* head, int val)
//{
//	int pos = -1;
//	while (head)
//	{
//		pos++;
//		if (head->val == val)
//		{
//			return pos;
//		}
//		head = head->next;
//	}
//	return -1;
//}
//
////
//ListNode* list_insert(ListNode* head, int pos, int val)
//{
//    // 1. 特殊情况：头插 (pos == 0)
//    if (pos == 0) 
//    {
//        ListNode* new_node = (ListNode*)malloc(sizeof(ListNode));
//        if (!new_node) return head;
//        new_node->val = val;
//        new_node->next = head;
//        return new_node; // 新节点成为新头
//    }
//
//    // 2. 寻找前驱节点 (pos-1 的位置)
//    ListNode* prev = head;
//    int current_pos = 0;
//
//    // 移动 prev，直到它到达 pos-1 的位置
//    // 关键：检查 prev->next 是为了防止越界，但这里我们只关心 prev 是否活着
//    while (prev != NULL && current_pos < pos - 1) 
//    {
//        prev = prev->next;
//        current_pos++;
//    }
//
//    // 3. 检查越界
//    // 如果 prev 是 NULL，说明 pos 太大了
//    if (prev == NULL) {
//        printf("Error: Position %d is out of bounds.\n", pos);
//        return head;
//    }
//
//    // 4. 执行插入
//    ListNode* new_node = (ListNode*)malloc(sizeof(ListNode));
//    if (!new_node) return head;
//
//    new_node->val = val;
//    new_node->next = prev->next; // 先连后面
//    prev->next = new_node;       // 再连前面
//
//    return head; // 头没变
//}
//
//int list_len(ListNode* list)
//{
//    ListNode* temp = list;
//    int len = 0;
//    while (list)
//    {
//        len++;
//        list = list->next;
//    }
//    list = temp;
//    return len;
//}
//
//ListNode* merge_helper(ListNode* list1, ListNode* list2, int val)
//{
//    ListNode* head = list1;
//    ListNode* list_next = NULL;
//    while (list1)
//    {
//        if(list1->next)
//        {
//            list_next = list1->next;
//            if ((list1->val < val || list1->val == val)&& list_next->val > val)
//            {
//                ListNode* new_node = (ListNode*)malloc(sizeof(ListNode));
//                if (!new_node) return head;
//                new_node->next = list1->next;
//                new_node->val = val;
//                list1->next = new_node;
//                list1 = list1->next;
//                return list1;
//            }
//        }
//        else
//        {
//            ListNode* new_node = (ListNode*)malloc(sizeof(ListNode));
//            if (!new_node) return head;
//            new_node->next = list1->next;
//            new_node->val = val;
//            list1->next = new_node;
//            list1 = list1->next;
//            return list1;
//        }
//        list1 = list1->next;
//    }
//    return head;
//}
//
//ListNode* merge_two_lists(ListNode* list1, ListNode* list2) 
//{
//    if (!list1)
//    {
//        return list2;
//    }
//    else if (!list2)
//    {
//        return list1;
//    }
//    int len = 0;
//    ListNode* head = NULL;
//    if (list2->val > list1->val)
//    {
//        len = list_len(list2);
//        head = list1;
//        for (int i = 0; i < len; i++)
//        {
//            merge_helper(list1, list2, list2->val);
//            list2 = list2->next;
//        }
//    }
//    else
//    {
//        len = list_len(list1);
//        head = list2;
//        for (int i = 0; i < len; i++)
//        {
//            merge_helper(list2, list1, list1->val);
//            list1 = list1->next;
//        }
//    }
//    return head;
//}
//// 你过关
//
//
//
//
//
//
////更好的做法
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//    struct ListNode dummy; // 用哨兵节点简化代码逻辑
//    struct ListNode* cur = &dummy; // cur 指向新链表的末尾
//    while (list1 && list2) 
//    {
//        if (list1->val < list2->val) 
//        {
//            cur->next = list1; // 把 list1 加到新链表中
//            list1 = list1->next;
//        }
//        else 
//        { // 注：相等的情况加哪个节点都是可以的
//            cur->next = list2; // 把 list2 加到新链表中
//            list2 = list2->next;
//        }
//        cur = cur->next;
//    }
//    cur->next = list1 ? list1 : list2; // 拼接剩余链表
//    return dummy.next;
//}
