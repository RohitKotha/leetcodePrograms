class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        int t1 = 0, t2 = 0;

        // Calculate lengths of both linked lists
        while (temp1 != NULL) {
            t1 += 1;
            temp1 = temp1->next;
        }

        while (temp2 != NULL) {
            t2 += 1;
            temp2 = temp2->next;
        }

        int diff = abs(t1 - t2);
        ListNode *temp3 = headA;
            ListNode *temp4 = headB;
        cout<<t1<<t2;
        // Adjust starting points of longer linked list
        if (t1 > t2) {
            
            while (diff != 0) {
                temp3 = temp3->next;
                
                diff--;
            }
             // Update headA to the adjusted position
        } else {
        
            while (diff != 0) {
                temp4 = temp4->next;
                diff--;
            }
         // Update headB to the adjusted position
        }
  
        // Traverse both linked lists simultaneously until intersection point is found
        while (temp3 != NULL && temp4 != NULL) {
            if (temp3== temp4) {
                cout << temp3->val;
                return temp3;
            }
              cout << temp3->val;
            temp3 = temp3->next;
            temp4 = temp4->next;
        }

        return NULL;
    }
};
