#include <stdio.h>
#include <math.h>
int main(){
	int N,M,sum = 0;
	scanf("%d",&N);
	int dis[N],sum_dis[N] = {0};
	for(int i=0;i<N;i++)
		scanf("%d",&dis[i]);
	for(int i=0;i<N;i++){
		sum += dis[i];
    	sum_dis[i] = sum;
	}
	scanf("%d",&M);
	for(int i=0;i<M;i++){
	    int a,b;
		scanf("%d %d",&a,&b);
		int temp = abs(sum_dis[b-2] - sum_dis[a-2]);
		int min = temp < sum-temp ? temp : sum-temp;
	    printf("%d\n",min);
	}
}

