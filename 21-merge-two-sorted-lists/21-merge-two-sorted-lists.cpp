/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *temp = new ListNode();
        ListNode *curr = temp;
        while(list1!=NULL && list2!=NULL){
            if(list1->val <= list2->val ){
                curr->next = list1;
                list1 = list1->next;
            }
            else{
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }
        curr->next = list1 != NULL ? list1:list2;
        return temp->next;
        
    }
};

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
// //         if(list1 == NULL) return list2;
// //         if(list2 == NULL) return list1;
// //         ListNode * ptr = list1;
// //         if(list1 -> val > list2 -> val)
// //         {
// //             ptr = list2;
// //             list2 = list2 -> next;
// //         }
// //         else list1 = list1 -> next;
// //         ListNode *curr = ptr;
// //         while(list1 &&  list2)
// //         {
// //             if(list1 -> val < list2 -> val){
// //                 curr->next = list1;
// //                 list1 = list1 -> next;
// //             }
// //             else{
// //                 curr->next = list2;
// //                 list2 = list2 -> next;
// //             }
// //             curr = curr -> next;
                
// //         }
// //         // adding remaining elements of bigger list.
// //         if(!list1) curr -> next = list2;
// //         else curr -> next = list1;
            
// //         return ptr;
//     }
// };