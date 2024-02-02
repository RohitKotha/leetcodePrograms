class Solution {
public:
    vector<int>v1;
    void fun(int low,int high,int i,int num){
       
        if(num>=low && num<=high){
            v1.push_back(num);
        }
        num=num*10+i;
        
         if(i>9 || num>high){
            return;
        }
        
        fun(low,high,i+1,num);
    }
    vector<int> sequentialDigits(int low, int high) {
        for(int i=1;i<=9;i++){
            fun(low,high,i,0);
        }
        sort(v1.begin(),v1.end());
        return v1;
    }
};