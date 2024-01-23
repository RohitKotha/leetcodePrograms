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
    bool hasCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(true){
            if(fast==NULL || fast->next==NULL || slow->next==NULL){
                return false;
            }
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                return true;
            }
        }
    }
};