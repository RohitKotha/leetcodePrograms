class Solution(object):
    def halvesAreAlike(self, s):
        """
        :type s: str
        :rtype: bool
        """
        ov="AEIOUaeiou"
        n=len(s)
        f=s[:n//2]
        l=s[n//2:]
        fc=0
        lc=0
        for i in f:
            if(i in ov):
                fc+=1
        for j in l:
            if j in ov:
                lc+=1
        if(fc==lc):
            return True
        else:
            return False
        