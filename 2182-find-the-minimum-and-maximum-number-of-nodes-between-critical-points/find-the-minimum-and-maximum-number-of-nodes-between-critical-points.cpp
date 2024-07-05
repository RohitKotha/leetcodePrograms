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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>v1;
        if(head->next==NULL or head->next->next==NULL){
            return {-1,-1};
        }
        ListNode *temp=head->next;
        ListNode*he=head;
        int co=2;
        while(temp->next!=NULL){
            if(temp->val < he->val and temp->val < temp->next->val){
                v1.push_back(co);
            }
            else if(temp->val > he->val and temp->val > temp->next->val){
                v1.push_back(co);
            }
            temp=temp->next;
            he=he->next;
            co++;
        }
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        //sort(v1.begin(),v1.end());
        if(v1.size()<=1){
            return {-1,-1};
        }
        
        if(v1.size()==2){
            int ok=abs(v1[0]-v1[1]);
            return {ok,ok};
        }
        if(v1.size()>2){
            int n1=INT_MAX;
            int n2=abs(v1[0]-v1[v1.size()-1]);
            for(int i=1;i<v1.size();i++){
                n1=min(n1,v1[i]-v1[i-1]);
            }
            return {n1,n2};
        }
        return {-1,-1};
    }
};