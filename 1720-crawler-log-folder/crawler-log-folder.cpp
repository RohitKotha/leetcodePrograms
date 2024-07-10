class Solution {
public:
    int minOperations(vector<string>& logs) {
        string st="";
        int p=0;
        for(int i=0;i<logs.size();i++){
            if(p==0 and logs[i]!="../" and logs[i]!="./"){
                p+=1;
            }
            else if(p!=0 and logs[i]!="../" and logs[i]!="./"){
                p+=1;
            }
            else if(p!=0 and logs[i]=="../"){
                p-=1;
            }
        }
        return p;
    }
};