class Solution:
    def maxArea(self, height: List[int]) -> int:
        i = 0
        j = len(height) - 1
        lit = []

        while i < j:
            if height[i] < height[j]:
                lit.append(height[i] * abs((j - i)))
                i += 1
            else:
                lit.append(height[j] * abs((i - j)))
                j -= 1
        print(lit)
        return max(lit)
