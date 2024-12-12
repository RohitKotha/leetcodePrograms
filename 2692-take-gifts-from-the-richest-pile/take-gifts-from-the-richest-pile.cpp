class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        long long total=0;
         priority_queue<long long>q1;
        for(long long i=0;i<gifts.size();i++){
            q1.push(gifts[i]);
            total+=gifts[i];
        }
        cout<<total;
        while(k--){
            total-=q1.top();
            long long ok=sqrt(q1.top());
            total+=ok;
            q1.pop();
            q1.push(ok);
        }
        return total;
    }
};