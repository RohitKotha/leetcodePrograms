class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v1(n+1,0);
        for(int i=0;i<n+1;i++){
            if(i%2==0){
                v1[i]=(v1[i/2]);
            }
            else{
                v1[i]=v1[i/2]+1;
            }
        }
        return v1;
    }
};