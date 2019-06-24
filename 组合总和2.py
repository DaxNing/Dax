class Solution(object):
    def combinationSum2(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        candidates.sort()
        n = len(candidates)
        res = []

        def backTracing(i, sum, tem):
            if sum > target:
                return
            if i == n:
                if sum == target and tem not in res:
                    res.append(tem)
                    return
                else:
                    return

            backTracing(i + 1, sum, tem)
            backTracing(i + 1, sum + candidates[i], tem + [candidates[i]])

        backTracing(0, 0, [])
        return res