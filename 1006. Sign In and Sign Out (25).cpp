#include <stdio.h>
#include <string.h>
int main(){
	int N;
	scanf("%d",&N);
	/*最小时间一定小于86399*/
	/*最大时间一定大于0*/
	int first_time = 86399,last_time = 0;
	char first_stu[16],last_stu[16];
	for(int i=0;i<N;i++){
		int H1,M1,S1,H2,M2,S2;
		char ID[16];
		scanf("%s %d:%d:%d %d:%d:%d",ID,&H1,&M1,&S1,&H2,&M2,&S2);
    	int minute_in = H1*3600 + M1*60 + S1;
    	int minute_out = H2*3600 + M2*60 + S2;
    	/*判断最早学生*/
    	if(minute_in < first_time){
    		first_time = minute_in;
        	strcpy(first_stu,ID);
		}
        /*判断最晚学生*/
    	if(minute_out > last_time){
        	last_time = minute_out;
        	strcpy(last_stu,ID);
        }
	}
	printf("%s %s",first_stu,last_stu);
	return 0;
}

