class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        ind = None
        for i in range(len(nums)):
            if nums[i]==0:
                ind = i
                break
        if ind is None:
            return nums
        
        a = ind
        j = ind+1
        while j<len(nums):
            if nums[j] == 0:
                j+=1
            else:
                nums[a],nums[j] = nums[j],nums[a]

                
                while a<=j:
                    if nums[a] == 0:
                        break
                    a+=1
                j+=1
        return nums
