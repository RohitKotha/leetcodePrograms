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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>st;
        stack<int>st1;
        ListNode *l11=l1;
        ListNode*l22=l2;
        while(l11!=NULL){
            st.push(l11->val);
           
            l11=l11->next;
            
        }
        while(l22!=NULL){
             st1.push(l22->val);
             l22=l22->next;
        }
        int carry=0;
        ListNode*head=new ListNode(0);
        ListNode*temp=head->next;
        int sum=0;
        int rem;

        while(!st.empty()||!st1.empty()||carry!=0){
                sum=carry;
                if(!st.empty()){
                    sum+=st.top();
                    st.pop();
                }
                if(!st1.empty()){
                    sum+=st1.top();
                    st1.pop();
                }
                
                carry=sum/10;
                
                ListNode*c=new ListNode(sum%10);
                c->next=temp;    
                temp=c;
                
        }
        return temp;
    }
};