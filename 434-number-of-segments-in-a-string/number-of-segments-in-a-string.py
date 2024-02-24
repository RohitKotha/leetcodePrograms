class Solution:
    def countSegments(self, s: str) -> int:
        if(s==""):
            return 0
        ok=[]
        ok=s.split(" ")
        gg=0
        for i in ok:
            if i!=" " and i!="":
                gg+=1
        return gg