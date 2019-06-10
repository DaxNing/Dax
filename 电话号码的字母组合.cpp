class Solution(object):
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        dic={'2':['a','b','c'],'3':['d','e','f'],'4':['g','h','i'],'5':['j','k','l'],\
            '6':['m','n','o'],'7':['p','q','r','s'],'8':['t','u','v'],'9':['w','x','y','z']}
        def backtrack(combination,next_digits):
            if len(next_digits)==0:
                output.append(combination)
                return
            else:
                for i in dic[next_digits[0]]:
                    backtrack(combination+i,next_digits[1:])
        
        output=[]
        if digits:
            backtrack("",digits)
        return output
