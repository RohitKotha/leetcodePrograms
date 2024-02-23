class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        fb=float('inf')
        sb=float('inf')
        fp=0
        sp=0
        for i in prices:
            fb=min(fb,i)
            fp=max(fp,i-fb)
            sb=min(sb,i-fp)
            sp=max(sp,i-sb)
        return sp