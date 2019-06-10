class Solution(object):
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        flag=0
        List = []
        def dfs(step,str,flag):
            if step == 2*n:
                if flag==0:
                    List.append(str)
            else:
                if flag>0 :
                    for i in range(2):
                        if i==0:
                            flag+=1
                            rstr=str
                            str=str+'('
                            dfs(step+1,str,flag)
                            str=rstr
                            flag-=1
                        else :
                            flag-=1
                            rstr=str
                            str=str+')'
                            dfs(step+1,str,flag)
                            str=rstr
                            flag+=1
                else :
                    flag+=1
                    rstr=str
                    str=str+'('
                    dfs(step+1,str,flag)
                    str=rstr
                    flag-=1
        dfs(0,"",flag)
        return List
