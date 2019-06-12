class Solution(object):
    def divide(self, dividend, divisor):
        """
        :type dividend: int
        :type divisor: int
        :rtype: int
        """
        flag = True
        if dividend < 0:
            flag = not flag
            dividend = -dividend
        if divisor < 0:
            flag = not flag
            divisor = -divisor
        a = str(dividend)
        result = '0'
        temp = 0
        i = 0
        while i < len(a):
            temp = int(str(temp)+a[i])
            res = 0
            while temp >= divisor:
                temp -= divisor
                res += 1
            result += str(res)
            i += 1
        result = int(result)
        if not flag:
            result = -result
        if result > 2**31-1 or result < -2**31:
            return 2**31-1
        else:
            return result
