class Solution {
public:
    int countPrimes(int n) {
        vector<bool>v1(n+1,true);
       
        v1[0]=false;
        v1[1]=false;
        for(int i=0;i*i<=n;i++){
            if(v1[i]==true){
                for(int j=i*i;j<=n;j+=i){
                    v1[j]=false;
                }
            }
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(v1[i]==true){
                c++;
            }
        }
        return c;
    }
};