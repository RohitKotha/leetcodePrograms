class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        numop=nums1+nums2;
        numop.sort()
        ok=len(numop)
        if(ok%2!=0):
            return numop[ok//2]        
        else:
            return (numop[ok//2]+numop[(ok//2)-1])/2