class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        ok=s.count('1')
        if(ok==0):
            return s
        if(ok==1):
            st='1'
            n=len(s)-1
            st=('0'*n)+st
            return st
        if(ok>1):
            st='1'
            ok-=1
            n=len(s)-ok-1
            st=('0'*n)+st
            
            while(ok!=0):
                st='1'+st
                ok-=1
            return st