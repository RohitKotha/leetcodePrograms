class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        sum=0
        l1=[]
        l1.append(sum)
        for i in gain:
            sum+=i
            l1.append(sum)
        return max(l1)
