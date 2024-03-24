class Solution {
public:
    int fillCups(vector<int>& amount) {
        sort(amount.begin(), amount.end(), greater<int>());
        int c=0;
        while(amount[0]>0){
            if(amount[1]>0){
                amount[0]-=1;
                amount[1]-=1;
                c++;
            }else{
                c+=amount[0];
                amount[0]=0;
            }
            sort(amount.begin(), amount.end(), greater<int>());
        }
        return c;
    }
};