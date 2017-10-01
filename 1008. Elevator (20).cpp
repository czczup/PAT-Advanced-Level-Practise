#include <stdio.h>
int main(){
	int N,now_floor = 0,time = 0;
	scanf("%d",&N);
	int requests[N];
	for(int i=0;i<N;i++){
		scanf("%d",&requests[i]);
		//上楼6秒 
    	if(requests[i] > now_floor)
        	time += 6*(requests[i]-now_floor);
    	//下楼4秒 
		else
        	time += 4*(now_floor-requests[i]);
    	//停留5秒 
		time += 5;
    	now_floor = requests[i];
	}
	printf("%d",time);
}

