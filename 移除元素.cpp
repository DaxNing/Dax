class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        '''
        l = len(nums)
        count = 0
        for i in range(l):
            if nums[i] != val:
                nums[count]=nums[i]
                count+=1
        return count
        # ±º‰∏¥‘”∂»O(n)
        '''
        r=len(nums)
        if r<=0:
            return 0
        l=0
        while l<r:
            if nums[l]==val:
                nums.pop(l)
                r-=1
            else:
                l+=1
        return r
        
