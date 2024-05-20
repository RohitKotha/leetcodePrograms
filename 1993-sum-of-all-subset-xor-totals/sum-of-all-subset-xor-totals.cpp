class Solution {
public:
int ans=0;
void fun(vector<int>nums,int n,int i,int x){
    if(i==n){
        ans+=x;
        cout<<x;
        return;
    }
    fun(nums,n,i+1,x^nums[i]);
    fun(nums,n,i+1,x);
}
    int subsetXORSum(vector<int>& nums) {
        fun(nums,nums.size(),0,0);
        return ans;
    }
};