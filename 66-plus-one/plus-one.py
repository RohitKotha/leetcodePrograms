class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        st=""
        for i in digits:
            st+=str(i)
        n=int(st)
        n=n+1
        st=str(n)
        l1=[]
        for i in st:
            l1.append(int(i))
        return l1