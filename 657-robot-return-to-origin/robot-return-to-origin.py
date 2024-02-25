class Solution:
    def judgeCircle(self, moves: str) -> bool:
        sum1=0
        sum2=0
        for i in moves:
            if i=="U":
                sum1+=1
            if i=="D":
                sum1-=1
            if i=="L":
                sum2+=1
            if i =="R":
                sum2-=1
        if sum1==0 and sum2==0:
            return True
        else:
            return False