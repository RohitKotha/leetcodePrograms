class Solution {
public:
    int titleToNumber(string gg) {
        
        int sz=gg.size()-1;
        long long ok=0;
        long long l=1;
        for(int i=gg.size()-1;i>=0;i--){
            
           
            ok+=l*abs(int(gg[i])-64);
            l*=26;  
                  
        }
        return ok;
    }
};