class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        list=[]
        n=len(nums);
        if n<=0:
            return list
        nums.sort()
        if nums[0]>0 or nums[len(nums)-1]<0:
            return list
        for i in range(n):
            if i>0 and nums[i]==nums[i-1]:
                continue;
            left=i+1
            right=n-1
            while left<right:
                sum=nums[i]+nums[left]+nums[right]
                if sum==0:
                    tmp=[nums[i],nums[left],nums[right]]
                    list.append(tmp)
                    while left<right and nums[left]==nums[left+1]:
                        left+=1
                    while left<right and nums[right]==nums[right-1]:
                        right-=1
                    left+=1
                    right-=1
                elif sum>0:
                    right-=1
                else:
                    left+=1
        return list 
