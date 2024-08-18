class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>ans(n+1);
        int n2,n3,n5;
        n2=n3=n5=1;
        ans[1]=1;
        for(int i=2;i<=n;i++){
            int p2=ans[n2]*2;
            int p3=ans[n3]*3;
            int p5=ans[n5]*5;
            int mini=min({p2,p3,p5});
            ans[i]=mini;
            if(mini==p2){
                
                n2++;
            }if(mini==p3){
                    
                    n3++;
            }
            if(mini==p5){
                
                n5++;
            }
        }
        return ans[n];
    }
};