class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        n=len(haystack)
        m=len(needle)
        if m == 0:
            return 0
        if m>n:
            return -1
        
        for i in range(n-m+1):
            flag=0
            for j in range(m):
                if haystack[i+j] != needle[j]:
                    flag=1
                    break
            if flag==0:
                return i
        return -1
                    
