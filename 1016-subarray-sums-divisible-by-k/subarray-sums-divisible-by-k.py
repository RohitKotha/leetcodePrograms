class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        d={}
        sum1=0
        c=0
        for i in nums:
            sum1+=i
            rem=sum1%k
            if(rem not in d):
                d[rem]=1
            else:
                c+=d[rem]
                d[rem]+=1
            if(rem==0):
                c+=1
        return c