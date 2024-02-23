from typing import List

class Solution:
    def maxProfit(self, l1: List[int]) -> int:
        l2 = []
        min1=l1[0]
        max1=0
        max2=0
        for i in l1[1:]:
            if i<min1:
                min1=i
               
            else:
                max1=max(max1,i-min1)
        return max1+max2