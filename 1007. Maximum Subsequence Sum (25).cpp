#include <stdio.h>
int main(){
	int sum = -1,n;
	scanf("%d",&n);
	int num[n];
	int leftindex = 0,rightindex = n - 1,temp = 0,tempindex = 0;
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
		temp += num[i];
		if(temp < 0){
			temp = 0;  
			tempindex = i + 1; //临时舍弃数字 
		}
		else if(temp > sum){ 
			sum = temp; //更新最大连续子列和 
			leftindex = tempindex;
			rightindex = i;
		}
	} 
	sum = sum < 0 ? 0 : sum; //所有数都小于0，认为最大和为0 
	printf("%d %d %d",sum,num[leftindex],num[rightindex]);
	return 0;	
}

