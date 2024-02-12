class Solution {
public:
    bool isHappy(int n) {
        long long temp = n;
        long long rem = 0;
        
        while (true) {
            while (temp > 0) {
                long long ok = temp % 10;
                rem += (ok * ok);
                temp = temp / 10;
            }
            
            if (rem == 1) {
                return true;
            } else if (rem == n || rem == 4) {
           return false;
            }
            
          
            temp = rem;
            rem = 0;
        }
    }
};
