class Solution {
public:
    int pivotInteger(int n) {
        int xt=n*(n+1)/2;
        int ok=-1;
         for(int i=1;i<=n;i++){
             int sum=i*(i+1)/2;
             if((xt-sum+i)==sum){
                 return i;
                 }
             
            }
        return -1;
    }
};