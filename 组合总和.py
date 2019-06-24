#!/user/bin/python
# _*_ coding: UTF-8 _*_

class Solution(object):
    def combinationSum(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        res = []
        n = len(candidates)

        def backTracking(i, sum, tem):
            if sum > target or i == n:
                return
            if sum == target:
                res.append(tem)
                return
            backTracking(i, sum + candidates[i], tem + [candidates[i]])
            backTracking(i + 1, sum, tem)

        backTracking(0, 0, [])
        return res

