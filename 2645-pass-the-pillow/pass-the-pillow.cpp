class Solution {
public:
    int passThePillow(int n, int time) {
        int round=time/(n-1);
        int timeleft=time%(n-1);
        if(round%2==0){
            return timeleft+1;
        }
        return n-timeleft;
    }
};