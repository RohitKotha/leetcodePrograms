class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        if(bills.size()==1){
            return false;
        }
        int ch=0;
        vector<int>v1(3,0);
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                v1[0]+=1;
            }
            else if(bills[i]==10){
                if(v1[0]>0){
                    v1[0]-=1;
                    
                    v1[1]+=1;
                }else{
                    cout<<"2";
                    return false;
                }
            }
            else if(bills[i]==20){
                if(v1[0]>0 and v1[1]>0){
                    v1[0]-=1;
                    v1[1]-=1;
                    v1[2]+=1;
                }else if(v1[0]>=3){
                        v1[0]-=3;
                        v1[2]+=1;
                    
                }
                else{
                    cout<<i;
                    cout<<"1";
                    return false;
                }
            }
        }



        return true;
    }
};