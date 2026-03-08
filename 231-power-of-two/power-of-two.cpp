class Solution {
public:
    bool isPowerOfTwo(int n) {
        int c=0;
       while(n>0){
        if((n)%2==1){
            c++;
        }
        n=n/2;
       }
       return c==1;
    }
};