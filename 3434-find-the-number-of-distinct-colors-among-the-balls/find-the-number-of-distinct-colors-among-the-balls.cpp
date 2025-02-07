class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
       // vector<int>v1(limit+1,0);
        unordered_map<int,int>color;
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            if(color.find(queries[i][0])==color.end()){
                mp[queries[i][1]]++;
                color[queries[i][0]]=queries[i][1];
            }else if(color.find(queries[i][0])!=color.end()){
                if(mp[color[queries[i][0]]]>1){
                    mp[color[queries[i][0]]]-=1;
                }else{
                    mp.erase(color[queries[i][0]]);
                }
                mp[queries[i][1]]++;
                color[queries[i][0]]=queries[i][1];
            }
            ans.push_back(mp.size());
        }
    return ans;
    }
};