#!/user/bin/python
# _*_ coding: UTF-8 _*_

class Solution(object):
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """

        def next_num(tem):
            res = ""
            i = 0
            n = len(tem)
            while i < n:
                count = 1
                while i < n - 1 and tem[i] == tem[i + 1]:
                    count += 1
                    i += 1
                res += (str(count) + tem[i])
                i += 1
            return res

        res = "1"
        for i in range(1, n):
            res = next_num(res)
        return res
