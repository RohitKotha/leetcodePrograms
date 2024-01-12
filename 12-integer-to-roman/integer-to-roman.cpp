class Solution {
public:
    char rom(int n){
        if(n==1){
            return 'I';
        }else if(n==5){
            return 'V';
        }else if(n==10){
            return 'X';
        }
        else if(n==50){
            return 'L';
        }else if(n==100){
            return 'C';
        }else if(n==500){
            return 'D';
        }else if(n==1000){
            return 'M';
        }
        //else if(n==4 || n==9 || n==50 || n==90 ||)
        return 0;
    }
    string intToRoman(int num) {
        string st=to_string(num);
        int len=st.size();
        int orr=0 ;
        string ans="";
        while(len!=0){
            if(len==0){
                break;
            }
            if(len>1){
                if(len==4){
                orr= num/1000;
                num=num%1000;
                while(orr>0){
                    ans+=rom(1000);
                    orr-=1;
                }
                len-=1;
                }
                if(len==3){
                orr= num/100;
                num=num%100;
                if(orr+1==10){
                    ans+="CM";
                }
                else if(orr>=5){
                    ans+='D';
                    orr=orr-5;
                    while(orr>0){
                    ans+=rom(100);
                    orr-=1;
                }}
                else if(orr<5){
                    if(orr==4){
                        ans+="CD";
                    }
                    else{
                        while(orr>0){
                            ans+=rom(100);
                            orr-=1;
                        }
                    }
                }
                len=len-1;
                }
                if(len==2){
                    orr=num/10;
                    num=num%10;
                    if(orr+1==10){
                        ans+="XC";
                    }
                    else if(orr>=5){
                        ans+='L';
                        orr=orr-5;
                        while(orr>0){
                            ans+=rom(10);
                            orr-=1;
                        }
                    }
                    else if(orr<5){
                    if(orr==4){
                        ans+="XL";
                    }
                    else{
                        while(orr>0){
                            ans+=rom(10);
                            orr-=1;
                        }
                    }
                }
                len=len-1;
                }
                
            }
            else{
                if(num+1==10){
                    ans+="IX";
                    num-=1;
                    break;
                }
                if(num>=5){
                    ans+='V';
                    num=num-5;
                    while(num>0){
                        ans+=rom(1);
                        num-=1;
                    }

                }
                if(num==4){
                    ans+="IV";
                }
                if(num<4){
                    while(num>0){
                        ans+=rom(1);
                        num-=1;
                    }
                }
                len=len-1;
            }
        }
        return ans;
    }
};