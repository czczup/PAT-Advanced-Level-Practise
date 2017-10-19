#include <stdio.h>
int main()
{
	int hash[10001]={0},number[100001];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&number[i]);
		hash[number[i]]++; //记录出现的次数 
	}
	int ans = -1; //存放结果,-1表示没找到 
	for(int i=0;i<n;i++){
		if(hash[number[i]]==1){ //只出现了一次 
			ans = number[i];
			break;
		}
	}
	if(ans==-1) //找不到只出现一次的数字 
		printf("None\n");
	else
		printf("%d\n",ans);
}

