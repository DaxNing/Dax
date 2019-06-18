class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        if len(nums) == 0:
            return [-1, -1]

        i = 0
        j = len(nums)
        re = []

        while i < j:
            mid = (i + j) // 2
            if target <= nums[mid]:
                j = mid
            else:
                i = mid + 1

        re.append(i)
        if i == len(nums) or nums[i] != target:
            return [-1, -1]

        i = 0
        j = len(nums)

        while i < j:
            mid = (i + j) // 2
            if target < nums[mid]:
                j = mid
            else:
                i = mid + 1
        re.append(i - 1)
        return re