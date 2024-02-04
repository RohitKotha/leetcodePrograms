class Solution {
public:
    vector<vector<int>>v1;
    void fun(vector<int> s,int start,int end){
        if(start>=end){
            v1.push_back(s);
            return;
        }
        for(int i=start;i<=end;i++){
            swap(s[start],s[i]);
            fun(s,start+1,end);
            swap(s[start],s[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        fun(nums,0,nums.size()-1);
        return v1;
    }
};