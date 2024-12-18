class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>v1;
        for(int i=0;i<prices.size();i++){
            int gg=0;
            for(int j=i+1;j<prices.size();j++){
                if(prices[i]>=prices[j]){
                    v1.push_back(prices[i]-prices[j]);
                    gg=1;
                    break;
                }
            }
            if(gg==0){
                v1.push_back(prices[i]);
            }
        }
        return v1;
    }
};