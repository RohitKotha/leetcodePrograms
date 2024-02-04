class Solution {
public:
vector<vector<int>>v1;
map<vector<int>,int>mp;
    void fun(vector<int> s,int start,int end,int &c){
        if(start>=end){
            mp[s]=c;
            c++;
            return;
        }
        for(int i=start;i<=end;i++){
            swap(s[start],s[i]);
            fun(s,start+1,end,c);
            swap(s[start],s[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        int c=0;
        fun(nums,0,nums.size()-1,c);
        for(auto it=mp.begin();it!=mp.end();it++){

            v1.push_back(it->first);
        }
        
        
        
        return v1;
    }
};