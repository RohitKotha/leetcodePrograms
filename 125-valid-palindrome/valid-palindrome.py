class Solution:
    def isPalindrome(self, s: str) -> bool:
        abc="QWERTYUIOPASDFGHJKLZXCVBNMqwertyuioopasdfghjklzxcvbnm1234567890"
        li=[]
        for i in s:
            if i in abc:
                li.append(i.lower());
        print(li)
        return li[::-1]==li