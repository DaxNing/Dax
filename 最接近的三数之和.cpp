class Solution(object):
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        n=len(nums)
        nums.sort()
        res=float('inf')
        for i in range(n):
            if i>0 and nums[i]==nums[i-1]:
                continue
            left=i+1
            right=n-1
            while left<right:
                Sum=nums[i]+nums[left]+nums[right]
                if Sum == target:
                    return Sum
                if abs(res-target)>abs(Sum-target):
                    res=Sum
                if Sum>target:
                    right-=1
                else:
                    left+=1
        return res
