class Solution {
public:


    bool fun(vector<vector<int>>& grid1,vector<vector<int>>& grid2,int i,int j){
        
        if(i<0 or i>=grid2.size() or j<0 or j>=grid2[0].size()){
            return true;
        }
        if(grid2[i][j]!=1){
            return true;
        }
        grid2[i][j]=-1;
        bool res=(grid1[i][j]==1);
        res=res & fun(grid1,grid2,i+1,j);
        res=res & fun(grid1,grid2,i,j+1);
        res=res & fun(grid1,grid2,i-1,j);
        res=res & fun(grid1,grid2,i,j-1);
        return res;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n=grid2.size();
        int m=grid2[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid2[i][j]==1  and fun(grid1,grid2,i,j)){
                    ans++;
                }
            }
        }
        return ans;
    }
};