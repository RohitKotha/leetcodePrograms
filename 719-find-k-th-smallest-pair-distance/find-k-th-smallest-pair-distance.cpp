class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=*max_element(begin(nums),end(nums));
        vector<int>v1(maxi+1,0);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int d=abs(nums[i]-nums[j]);
              v1[d]++;  
            }
        }
        for(int i=0;i<v1.size();i++){
            k-=v1[i];
            if(k<=0){
                return i;
            }
        }
        return -1;
    }
};