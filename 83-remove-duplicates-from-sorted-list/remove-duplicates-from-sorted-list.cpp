class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* temp = head;

        while (temp->next != nullptr) {
            if (temp->val == temp->next->val) {
                ListNode* duplicate = temp->next;
                temp->next = temp->next->next;
                delete duplicate;  // Optional: free the memory of the duplicate node
            } else {
                temp = temp->next;
            }
        }

        return head;
    }
};
