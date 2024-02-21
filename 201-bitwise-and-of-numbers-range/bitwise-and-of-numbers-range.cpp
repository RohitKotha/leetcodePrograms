class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int r=right;
        while(right> left){
            r=right & (right-1);
            right=r;
        }
        return r;
    }
};