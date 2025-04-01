class Solution {
public:
    void dfs(int node,vector<int>&vis,vector<vector<int>>& adj){
        vis[node]=1;
        for(int j=0;j<adj.size();j++){
            if(adj[node][j] == 1 and !vis[j]){
                dfs(j,vis,adj);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& adj) {
        int n=adj.size();
        vector<int>vis(n,0);
        int ans=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                ans++;
                dfs(i,vis,adj);
            }
        }
        return ans;
    }
};