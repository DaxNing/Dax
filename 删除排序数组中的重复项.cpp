class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        n=len(nums)
        count=0
        for i in range(1,n):
            if nums[count]!=nums[i]:
                count+=1
                nums[count]=nums[i]
        return count+1
