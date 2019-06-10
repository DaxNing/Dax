class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int LL=strs.size();
        int L=0x3f3f3f3f;
        int i,j;
        if(LL==0) return "";
        for(i=0;i<LL;i++){
            int a=strs[i].size();
            L=min(L,a);
        }
        
        string res;
        for(i=0;i<L;i++){
            char f=strs[0][i];
            for(j=1;j<LL;j++){
                if(f!=strs[j][i])
                    break;
            }
            if(j==LL) res+=f;
            else break;
        }
        return res;
    }
};
