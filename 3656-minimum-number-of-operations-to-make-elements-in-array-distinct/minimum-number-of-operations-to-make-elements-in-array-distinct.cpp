class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>mp;
        int co=0;
        for(int i=0;i<nums.size();i++){   
        mp[nums[i]]++;
        if(mp[nums[i]]>1){
           co++;
        }
        }
        int i=0;
        cout<<co;
        while(i<nums.size()){
            if(co==0){
                cout<<"boo";
                return ans;
            }
             else if(i+2>=nums.size()){
                    ans++;
                    cout<<"boo";
                    return ans;
                } 
            else if(i+2<nums.size()){
                
                     if(mp[nums[i]]>1 and co!=0){
                        co--;
                    }
                     mp[nums[i]]-=1;
                    if(mp[nums[i+1]]>1 and co!=0){
                        co--;
                    }
                     mp[nums[i+1]]-=1;
                    if(mp[nums[i+2]]>1 and co!=0){
                        co--;
                    }
                    mp[nums[i+2]]-=1;               
                    ans++;
                    i+=3;  
            }
          
        }
        return ans;
    }
};