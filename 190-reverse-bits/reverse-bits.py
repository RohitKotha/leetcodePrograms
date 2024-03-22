class Solution:
    def reverseBits(self, n: int) -> int:
        bit = format(n, '032b')
        ##bit=bit[::-1]
        print(bit)
        num=0
        i=1
        
        co=0
        while(co<32):
            num+=i*int(bit[co])
            i=i*2
            co+=1
        print(num)
        return num