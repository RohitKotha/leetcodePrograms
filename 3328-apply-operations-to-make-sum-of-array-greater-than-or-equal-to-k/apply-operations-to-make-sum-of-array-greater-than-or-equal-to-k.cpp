class Solution {
public:
    int minOperations(int k) {
        float s,mn=1000000;
        float m=k;
        for(int i=0;i<k;i++){
            s=i+ceil((m/(i+1)))-1;
            if(s<mn)
                mn=s;
        }
        return mn;
    }
};