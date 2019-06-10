class Solution {
public:
    int myAtoi(string str) {
        int i=0;
        long res=0;
        int sign=1;
        while(i<str.size() && str[i]==' ') ++i;
        if(i == str.size()) return 0;
        if(str[i]=='-') {sign=-1;i++;}
        else if(str[i]=='+') i++;          
        while(i<str.size() && isdigit(str[i]))//isdigit()判断是不是十进制数字字符 
        {
            res=res*10+(str[i++]-'0');
            if(res>INT_MAX){
                if(sign==1) return INT_MAX;
                else return INT_MIN;
            }
        }
        return res*sign;
    }
};

