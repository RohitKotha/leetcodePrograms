class Solution {
public:
    int timeRequiredToBuy(vector<int>& nums, int k) {
        queue<int>q1;
        for(int i=0;i<nums.size();i++){
           q1.push(i); 
        }
        int c=0;
        while(nums[k]!=0){
            c++;
            nums[q1.front()]--;
            if(nums[q1.front()]>0){
            int ok=q1.front();
            q1.pop();
            q1.push(ok);
            }else{
                q1.pop();
            }
            
        }
        return c;
    }
};