class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        int c = 0;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                ListNode* temp = head;

                // Reset slow pointer to the head and move both pointers one step at a time
                slow = head;
                while (slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;  // or return fast; both point to the start of the cycle
            }

            c++;
        }
        return NULL;
    }
};
