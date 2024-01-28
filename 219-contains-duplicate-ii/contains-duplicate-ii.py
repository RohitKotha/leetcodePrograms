class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        dict={}
        for i in range (len(nums)):
            n=nums[i]
            if n in dict:
                if(abs(i-dict[n])<=k):
                    return True    
            dict[n]=i
        return False