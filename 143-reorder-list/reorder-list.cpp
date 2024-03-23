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
        int len=0;
        ListNode*temp=head;
        ListNode*t1=head;
        ListNode*t2=head;
        
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        len=len/2;
        len=len+1;
        int c=0;
        while(c!=len){
            t2=t1;
            t1=t1->next;
            c++;
        }
        t2->next=NULL;
       ListNode*ok=head;
       ListNode* current = t1;
        ListNode *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
            // Reverse current node's pointer
            current->next = prev;
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        t1 = prev;
        ListNode*q1=t1;
        while(q1!=NULL){
            cout<<q1->val;
            q1=q1->next;
        }
        while(t1!=NULL){
            ListNode*to=ok->next;
            ListNode*to1=t1;
            t1=t1->next;
            to1->next=NULL;
            
            ok->next=to1;
            ok=ok->next;
            ok->next=to;
            ok=ok->next;
        }
    }
};