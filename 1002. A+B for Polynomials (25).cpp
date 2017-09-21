#include <stdio.h>
int main(){
	double number[1001]={0};
	int K1,K2,a;
	double b;
	scanf("%d",&K1);
	for(int i=0;i<K1;i++){
		scanf(" %d %lf",&a,&b);
		number[a] += b;
	}
	scanf("%d",&K2);
	for(int i=0;i<K2;i++){
		scanf(" %d %lf",&a,&b);
		number[a] += b;
	}
	int cnt = 0;
	for(int i=0;i<=1000;i++){
		if(number[i]!=0)
			cnt++;
	}
	printf("%d",cnt); 
	for(int i=1000;i>=0;i--){
		if(number[i]!=0)
			printf(" %d %.1lf",i,number[i]);
	}
	return 0;
}

