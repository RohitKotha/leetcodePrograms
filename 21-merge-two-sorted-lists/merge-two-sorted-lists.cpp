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
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* op=new ListNode(0);
        ListNode*temp3=op;
        int t1,t2;
        while(temp1!=NULL && temp2!=NULL){
            t1=temp1->val;
            
            t2=temp2->val;
            

            if(t1<t2){
                ListNode* lp=new ListNode(t1);
                temp3->next=lp;
                temp1=temp1->next;
            }
            else{
                ListNode* lp=new ListNode(t2);
                temp3->next=lp;
                temp2=temp2->next;
            }
            temp3=temp3->next;

        }
         while(temp1!=NULL){
        ListNode* lp=new ListNode(temp1->val);
                temp3->next=lp;
                temp3=temp3->next;
                 temp1=temp1->next;
         }
        while(temp2!=NULL){
             ListNode* lp=new ListNode(temp2->val);
                temp3->next=lp;
                temp3=temp3->next;
                 temp2=temp2->next;
         }
        return op->next;
    }
};