//#include <stdio.h>
//
//typedef struct ListNode 
//{
//     int val;
//     struct ListNode *next;
// }ListNode;
//
//ListNode* remove_elements(ListNode* head, int val)
//{
//    if (!head) return NULL;
//    ListNode dummy;
//    ListNode* prev = &dummy;
//    prev->next = head;
//    while (head)
//    {
//        if (head->val == val)
//        {
//            prev->next = head->next;
//        }
//        else
//        {
//            prev = prev->next;
//        }
//        head = head->next;
//    }
//    return dummy.next;
//}
//
////你过关
