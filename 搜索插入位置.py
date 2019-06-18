class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        if len(nums) == 0:
            return 0

        i = 0
        j = len(nums)

        while i < j:
            mid = (i + j) // 2
            if nums[mid] == target:
                return mid
            if target < nums[mid]:
                j = mid
            else:
                i = mid + 1
        return i