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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
     
        ListNode*temp=list1;
        int c=0;
        bool n=false;

        while(c!=a-1){
            temp=temp->next;
            c++;
            }
        ListNode* temp1=temp;
       while(c!=b+1){
           temp=temp->next;
            c++;
           }
        temp1->next=list2;
    while(temp1->next!=NULL){
        temp1=temp1->next;
        }
    temp1->next=temp;
    return list1;
    }
};