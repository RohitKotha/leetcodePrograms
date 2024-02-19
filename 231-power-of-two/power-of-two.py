class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        if(n==1):
            return True
        if(n<0):
            return False
        str1=bin(n)
        if(str1.count('1')==1):
            return True
        else:
            return False