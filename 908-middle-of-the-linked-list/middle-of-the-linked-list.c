/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
int len=0;
struct ListNode *temp = head;
while(temp!=NULL){
    len++;
    temp = temp->next;
}
int mid =len/2;
struct ListNode *res= head;
while(mid--){
    res=res->next;
}
return res;
}
