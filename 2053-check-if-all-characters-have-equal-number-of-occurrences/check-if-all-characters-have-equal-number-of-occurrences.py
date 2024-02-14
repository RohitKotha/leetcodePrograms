class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        dict1={}
        for i in s:
            if i in dict1:
                dict1[i]+=1
            else:
                dict1[i]=1
        l1=list(dict1)
        ok=dict1[l1[0]]
        for i in range (len(l1)):
            if dict1[l1[i]]!=ok:
                return False
        return True