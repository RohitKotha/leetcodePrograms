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
    void deleteNode(ListNode* node) {
        ListNode* temp=node;
        ListNode* temp1;
        while(temp->next!=NULL){
            int k=temp->val;
            temp->val=temp->next->val;
            temp1=temp;
            temp=temp->next;
            temp->val=k;
        }
        temp1->next=NULL;
    }
};