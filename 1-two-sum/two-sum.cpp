class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0,p=0,k;
        for(int i=0;i<nums.size();i++){
            sum=0;
            for(int j=i;j<nums.size();j++){
                if(i==j){
                    continue;
                }
                sum=nums[i]+nums[j];
                if(sum==target){
                    k=j;
                    p=i;
                    break;
                }
            }
            
        }
        vector<int>vj;
        
            vj.push_back(p);
            vj.push_back(k);
        return vj;
    }
};