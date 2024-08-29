class Solution {
public:
    void dfs(vector<vector<int>>& stones,int ind, vector<bool>&vis){
        vis[ind]=true;
        for(int i=0;i<stones.size();i++){
            int r=stones[ind][0];
            int c=stones[ind][1];
            if(vis[i]==false and (stones[i][0]==r or stones[i][1]==c)){
                dfs(stones,i,vis);
            }
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size(),groups=0;
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++){
                if(vis[i]==true){
                    continue;
                }
                dfs(stones,i,vis);
                groups++;
        }
        return stones.size()-groups;
    }
};