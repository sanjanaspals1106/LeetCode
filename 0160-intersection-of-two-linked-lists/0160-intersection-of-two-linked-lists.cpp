/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *currA = headA;
        ListNode *currB = headB;
        while(currA!=currB){
            if(currA!=NULL){
                currA=currA->next;
            }else{
                currA=headB;
            }
            if(currB!=NULL){
                currB=currB->next;
            }else{
                currB=headA;
            }

        }
        return currA;
    }
};