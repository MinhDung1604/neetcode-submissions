class Solution:
    def isHappy(self, n: int) -> bool:
        s = 0
        digits = [int(i)**2 for i in str(n)]
        set_s = set()
        while s != 1 and s not in set_s:
            set_s.add(s)
            s = 0
            for i in digits:
                s += i
            if s in set_s:
                return False
        return True
            
        
