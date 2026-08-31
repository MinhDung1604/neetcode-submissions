class Solution:
    def isHappy(self, n: int) -> bool:
        digits = [int(i)**2 for i in str(n)]
        list_s = []
        s = 0
        for i in digits:
            s += i
        list_s.append(s)
        while s != 1:
            digits = [int(i)**2 for i in str(s)]
            s= 0
            for i in digits:
                s += i
            if s in list_s:
                return False
            else:
                list_s.append(s)
        return True
            
        
