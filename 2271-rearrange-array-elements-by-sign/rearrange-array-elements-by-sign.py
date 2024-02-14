class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        i=0
        j=1
        c=0
        l1=[]
        l2=[]
        for i in range(len(nums)):
            if nums[i]<0:
                l1.append(nums[i])
            else:
                l2.append(nums[i])
            
        nums.clear()
        for i in range(len(l1)):
            nums.append(l2[i])
            nums.append(l1[i])
        return nums
