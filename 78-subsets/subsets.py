class Solution:
    def subsets(self, lit: List[int]) -> List[List[int]]:
        k=len(lit)
        n=len(lit)
        ok=[]
        for i in range((2**n)):
            k=len(lit)
            l2=[]
            ##print(i)
            w=i
            while(k!=0):
                if(1&w):
                    l2.append(lit[k-1])
                k-=1
                w>>=1
            ok.append(l2)
        return ok   
            
