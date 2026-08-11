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
    int getDecimalValue(ListNode* head) {
        ListNode* curr=head;
        int place=0;
        int ans=0;
        while(curr!=NULL){
            curr=curr->next;
            place++;
        }
        curr=head;
        while(curr!=NULL){
            ans+= (curr->val)*(1<<(place-1));
            place--;
            curr=curr->next;
        }
        return ans;
    }
};