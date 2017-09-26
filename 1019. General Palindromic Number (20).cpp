#include <stdio.h>
#include <string.h>
/*判断是否回文*/
bool Palindromic(int num[],int len){
	for(int cnt=0;cnt<=len/2;cnt++){
		if(num[cnt]!=num[len-1-cnt])
			return false;
	}
	return true;
}
int main(){
	int N,B,len=0,num[40];
	scanf("%d %d",&N,&B);
	/*len计数*/
	do{
		num[len++] = N % B;
		N = N / B; 
	}while(N!=0);
	bool flag = Palindromic(num,len);
	flag == true ? printf("Yes\n") : printf("No\n");
	/*格式化输出*/
	for(int i=len-1;i>=0;i--){
		printf("%d",num[i]);
		if(i!=0)
			printf(" ");
	}
}

