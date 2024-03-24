class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int sum=0;
        int c=0;
        for(int i=cost.size()-1;i>=0;i--){
            if(c==2){
                c=0;
                continue;
            }
            else{
                c++;
                sum+=cost[i];
            }
        }
        return sum;
    }
};