class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        dict={}
        for i in arr:
            if i in dict:
                dict[i]+=1
            else:
                dict[i]=1
        values = list(dict.values())
    
        for i in range(len(values)):
            for j in range(i + 1, len(values)):
                if values[i] == values[j]:
                    return False
        
        return True