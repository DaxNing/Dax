class Solution {
public:
    int romanToInt(string s) {
        int result=0;//��Ž��
        map<char,int> luomab;//���������
        //�����Ӧ��ϵ
        luomab.insert(map<char,int>::value_type('I',1));
        luomab.insert(map<char,int>::value_type('V',5));
        luomab.insert(map<char,int>::value_type('X',10));
        luomab.insert(map<char,int>::value_type('L',50));
        luomab.insert(map<char,int>::value_type('C',100));
        luomab.insert(map<char,int>::value_type('D',500));
        luomab.insert(map<char,int>::value_type('M',1000));
        for(int i=0;i<s.length();i++)
        {
            if(luomab[s[i]]>=luomab[s[i+1]])
                result+=luomab[s[i]];
            else
            {
                result+=(luomab[s[i+1]]-luomab[s[i]]);
                i++;
            }
        }
        return result;
    }
};

