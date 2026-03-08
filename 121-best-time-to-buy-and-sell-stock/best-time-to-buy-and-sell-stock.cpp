class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int l=0,r=1;
        while(r<prices.size()){
            if(maxprofit<prices[r]-prices[l]){
                maxprofit=prices[r]-prices[l];
            }
            if(prices[l]>prices[r]){
                l=r;
               
            }
    	
            r++;
        }
        return  maxprofit;
    }
};