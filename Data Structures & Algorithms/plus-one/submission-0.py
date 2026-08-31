class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        nums = digits[::-1]
        r = 1
        for i in range(len(nums)):
            if r == 1:
                nums[i] += 1
                r = 0
            if nums[i] == 10:
                nums[i] = 0
                r = 1
        if r == 1:
            nums.append(1)
        return(nums[::-1])
        

            
        