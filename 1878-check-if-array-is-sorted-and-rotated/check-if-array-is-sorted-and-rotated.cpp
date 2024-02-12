class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>ok=nums;
        sort(ok.begin(),ok.end());
        if(ok==nums){
            cout<<1;
            return true;
        }
        for(int i=0;i<ok.size();i++){
            int k=nums[0];
            nums.push_back(k);
            nums.erase(nums.begin());
            if(ok==nums){
                cout<<2;
            return true;
        }
        }
        cout<<3;
        return false;
    }
};