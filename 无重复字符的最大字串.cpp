#include<cstdio>
#include<iostream> 
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std; 

int lengthOfLongestSubstring(char * s){
	int hash[100];
	int n; 
	int count=0;
	int ans=0;
	n=strlen(s);
	if(n<=0) return 0;
	for(int i=0;i<n;i++){
		memset(hash,0,sizeof(hash));
		count=0;
		for(int j=i;j<n;j++){
			if(hash[s[j]-' ']!=0){
				break;
			}else{
				hash[s[j]-' ']++;
			}
		}
		for(int j=0;j<100;j++){
			if(hash[j]==1) count++; 
		}
		if(count>ans) ans=count;
	}
	return ans;
}

int main(){
	char S[]=" ";
	printf("%d",lengthOfLongestSubstring(S)); 
}

#define BUFLEN 128

int lengthOfLongestSubstring(char * s){
    int i = 0;
	int len = 0;
	int ret = 0;
	int tmp[BUFLEN];
	int itmp = 0;

	memset(tmp, -1, sizeof(int)*BUFLEN);
    
	while (s[i] != '\0')
	{
		if (-1 != tmp[s[i]])
		{
			if (len > ret)ret = len;
			while (s[itmp] != s[i])
			{
				tmp[s[itmp++]] = -1;
				len--;
			}
			itmp++;
			len--;
			
		}
		tmp[s[i]] = i;
		len++;
		i++;
	}

	if (len > ret)ret = len;

    return ret;
}
