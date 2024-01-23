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
    ListNode* deleteMiddle(ListNode* head) {
        int len=0;
        struct ListNode *temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        if(len==1){
            return {};
        }
        int mid =len/2;
        struct ListNode *res= head;
        while(mid>1){
            res=res->next;
            mid--;
        }
        res->next=res->next->next;
        return head;
    }
};