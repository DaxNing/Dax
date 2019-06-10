class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack=[]
        n=len(s)
        if n==0:
            return True
        if n%2 !=0:
            return False
        for i in range(n):
            if s[i]=='(' or s[i]=='[' or s[i]=='{':
                stack.append(s[i])
            elif s[i]==')':
                if len(stack)>0 and stack[-1]=='(':
                    stack.pop()
                else :
                    return False
            elif s[i]==']':
                if len(stack)>0 and stack[-1]=='[':
                    stack.pop()
                else:
                    return False
            elif s[i]=='}':
                if len(stack)>0 and stack[-1]=='{':
                    stack.pop()
                else:
                    return False
            else:
                continue
        if len(stack)==0:
            return True
        else:
            return False
