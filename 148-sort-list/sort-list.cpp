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
    ListNode* sortList(ListNode* head) {
        priority_queue<int, vector<int>, greater<int>> pq;
         ListNode*headRef = head;
        
        // Push all elements of the list into the priority queue
        while (headRef != NULL) {
            pq.push(headRef->val);
            headRef = headRef->next;
        }
       
        headRef=head;
        
        while (!pq.empty()) {
            headRef->val = pq.top();
            pq.pop();
            headRef = headRef->next;
        }
        return head;
    }
};