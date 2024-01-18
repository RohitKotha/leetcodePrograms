class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        lit=[]
        lit2=[]
        lit3=nums[::-1]
        sum=0
        for i in nums:
            sum+=i
            lit.append(sum)
        sum=0
        for i in lit3:
            sum+=i
            lit2.append(sum)
        print(lit)
       
        lit3=lit2[::-1]
        print(lit3)
        for i in range(len(lit)):
            if lit[i]==lit3[i]:
                return i
        return -1;