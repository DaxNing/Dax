#define max(a,b)  ((a>b)?(a):(b))

int maxArea(int* height, int heightSize){
    int MaxSize=0;
    int l,w;
    int s;
    for(int i=0;i<heightSize-1;i++){
    	for(int j=i;j<heightSize;j++){
    		l=max(height[i],height[j]);
    		w=j-i;
    		s=l*w;
    		if(s>MaxSize) MaxSize=s;
		}
	}
	return MaxSize;
}
