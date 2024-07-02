class Solution {
public:
    vector<int> intersect(vector<int>& num1, vector<int>& num2) {
        map<int,int>mp;
        vector<int>v1;
        for(int i=0;i<num1.size();i++){
            mp[num1[i]]++;
        }
        for(int i=0;i<num2.size();i++){
            if(mp.find(num2[i])!=mp.end()){
            if(mp[num2[i]]!=0){
                v1.push_back(num2[i]);
                mp[num2[i]]--;
            }
               }
        }
        return v1;
    }
};