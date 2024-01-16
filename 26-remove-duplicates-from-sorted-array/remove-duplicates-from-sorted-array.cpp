class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int arr[nums.size()];
        int k=0;
        int n=nums.size()-1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                continue;
            }
            arr[k++]=nums[i];

        }
        arr[k++]=nums[n];
        nums.clear();
        for(int i=0;i<k;i++){
            nums.push_back(arr[i]);
        }
        
        return nums.size();
    }
};