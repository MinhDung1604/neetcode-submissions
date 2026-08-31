class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        dict1 = {}
        dict2 = {}
        for c in s:
            if c in dict1.keys():
                num = dict1[c]
                num += 1
                dict1[c] = num
            else:
                dict1[c] = 1 
        for c in t:
            if c in dict2.keys():
                num = dict2[c]
                num += 1
                dict2[c] = num
            else:
                dict2[c] = 1 
        return dict1 == dict2
            