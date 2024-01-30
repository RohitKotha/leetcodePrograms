class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int k=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr[i].size();j++){
                k=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=k;
            }
        }
        for(int i=0;i<arr.size();i++){
            reverse(arr[i].begin(),arr[i].end());
        }
    }
};