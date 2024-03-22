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
    bool isPalindrome(ListNode* head) {
        ListNode*fast=head;
        ListNode*slow=head;
        ListNode*temp;
        if(head->next==NULL){
            return true;
        }
       while(fast != NULL && fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
            }

        temp=slow;
        
        ListNode *prev = NULL;
        ListNode* current = temp;
        ListNode *next = NULL;
         while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        temp = prev;
        while(temp!=NULL){
            if(head->val!=temp->val){

                return false;
            }
            head=head->next;
            temp=temp->next;
        }
        return true;
    }
};