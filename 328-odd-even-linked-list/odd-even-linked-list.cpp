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
    ListNode* oddEvenList(ListNode* head) {
        
        int co=0;
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*last=head;
        while(last->next!=NULL){
            last=last->next;
            co++;
        }
        ListNode*temp=head;
        int c=1;
        if(co%2==0){
            co=co/2;
        }
        else{
            co=(co/2)+1;
        }
        while(temp!=NULL && temp->next!=NULL&&co--){
            if(c%2!=0){
                ListNode* cl=new ListNode(temp->next->val);
                cout<<cl->val;
                last->next=cl;
                last=last->next;
                temp->next=temp->next->next;
                
            }
            temp=temp->next;
            c+=2;
            
        }
        return head;
    }
};