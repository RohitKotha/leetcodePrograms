class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        dict1={}
        for i in arr:
            if i in dict1:
                dict1[i]+=1
            else:
                dict1[i]=1
        l2=list(dict1)
        l1=[]
        for i in l2:
           l1.append(dict1[i])
        l1.sort()
        arr.sort()
        print(l1,dict1) 
        i=0
        while(k!=0):
            if l1[i]==0:
                i+=1
            else:
                l1[i]-=1
                k-=1
        c=0
        for i in l1:
            if i!=0:
                c+=1
        return c