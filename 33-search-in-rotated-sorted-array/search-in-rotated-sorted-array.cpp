class Solution {
public:
    int search(vector<int>& nums, int target) {
        int k,t,n;
        int i=0;
        int j=nums.size()-1;
        int mid=(i+j)/2;
        //cout<<mid;
        while(i<=j){
            if(nums[mid]==target){
                
                return mid;
            }
            if(nums[i]<=nums[mid]){

                if(nums[i]<=target && target<=nums[mid]){
                    j=mid-1;
                }
                else{
                    i=mid+1;
                }

            }
            
            else if(nums[j]>=nums[mid]){
                if(nums[j]>=target && target>=nums[mid]){
                    i=mid+1;
                }
                else{
                    j=mid-1;
                }

            }
            else{
                i++;
                j--;
            }
            mid=(i+j)/2;
        }
        return -1;
    }
};