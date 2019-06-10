class Solution(object):
    def fourSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        nums.sort()
        res=[]
        n=len(nums)
        if n<4:
            return res
        for i in range(n-3):
            if i>0 and nums[i]==nums[i-1]:
                continue
            if nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target:
                break
            if nums[i]+nums[n-3]+nums[n-2]+nums[n-1]<target:
                continue
            for j in range(i+1,n-2):
                if j>i+1 and nums[j]==nums[j-1]:
                    continue
                if nums[i]+nums[j]+nums[j+1]+nums[j+2]>target:
                    break
                if nums[i]+nums[j]+nums[n-2]+nums[n-1]<target:
                    continue
                left=j+1
                right=n-1
                while left<right:
                    sum=nums[i]+nums[j]+nums[left]+nums[right]
                    if sum==target:
                        cur=[nums[i],nums[j],nums[left],nums[right]]
                        res.append(cur)
                        while left<right and nums[left+1]==nums[left]:
                            left+=1
                        while left<right and nums[right-1]==nums[right]:
                            right-=1
                        left+=1
                        right-=1
                    elif sum>target:
                        right-=1
                    else:
                        left+=1
        return res
            
            
