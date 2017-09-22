#include <stdio.h>
int main()
{
	int repeat;
	scanf("%d",&repeat);
	/*读取顺序表*/
    int shuffling[54] = {0},origin[54] = {0};
    for(int i=0;i<54;i++){
    	scanf("%d",&shuffling[i]);
	} 
    /*初始化未排序列表*/
	for(int i=0;i<54;i++){
		origin[i] = i;
	}
	/*重新排序*/
	for(int i=0;i<repeat;i++){
		int result[54] = {0};
		for(int j=0;j<54;j++)
			result[shuffling[j]-1] = origin[j];
		for(int k=0;k<54;k++)
	    	origin[k] = result[k];
	}   
	/*格式化输出*/
	char alpha[5]={'S','H','C','D','J'};
	printf("%c%d",alpha[origin[0]/13],(origin[0])%13+1);
	for(int i=1;i<54;i++){
		printf(" %c%d",alpha[origin[i]/13],(origin[i])%13+1);
	}
}

