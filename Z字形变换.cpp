#include<cstdio>
#include<bits/stdc++.h> 
char * convert(char * s, int numRows){
	char* ans=(char*)malloc(sizeof(char)*1005);
	int l=strlen(s);
	int c=2*numRows-2;
	int d=2;//差值 
	int k=0; 
	int change=0;//变换开关 
	memset(ans,0,sizeof(char)*1005);
	if(1==numRows) return s;
		
	for(int i=0;i<numRows;i++){
		if(i==0||i==numRows-1){
			for(int j=i;j<l;j=j+c){
				if(k<1000){
					ans[k++]=s[j];
				}
			}
	    }else{
	    	change=0;
	    	for(int j=i;j<l;){
	    		if(k<1000){
	    			ans[k++]=s[j];
				}
	    		if(change==0){
	    			change=1;
	    			j=j+(c-d);
				}else{
					change=0;
					j=j+(d);
				}
			}
			d=d+2;
		}
	}
	return ans;

}

int main(){
	char* anss=(char*)malloc(sizeof(char)*100);
	char s[]="LE";
	anss=convert(s,3);
	for(int i=0;anss[i]!='\0';i++){
		printf("%c",anss[i]);
	}
	return 0;
}




