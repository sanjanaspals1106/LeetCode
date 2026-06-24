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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* bl2=slow->next;
        slow->next=NULL;
        ListNode* prev=NULL;
        ListNode* curr=bl2;
        
        while(curr!=NULL){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        while(head!=NULL && prev!=NULL){
        ListNode* temp1=head->next;
        ListNode* temp2=prev->next;
        head->next=prev;
        head->next->next=temp1;
        head=temp1;
        prev=temp2;
        }
    }
};