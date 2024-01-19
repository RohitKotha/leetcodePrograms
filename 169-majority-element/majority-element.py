class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        l={}
        for i in nums:
            if i in l:
                l[i]+=1
            else:
                l[i]=1
        print(l)
        for i in nums:
            if l[i]>len(nums)//2:
                return i
