class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        i = 0
        j = len(nums) - 1
        while i <= j:
            if nums[i] > target and nums[j] < target:
                return -1
            if nums[i] == target:
                return i
            if nums[j] == target:
                return j
            if target > nums[i]:
                i += 1
            if target < nums[j]:
                j -= 1
        return -1
