#include <stdio.h>
int main(){
	double W,T,L,mul = 1.0;
	char res[3];
	for(int i=0;i<3;i++){
		scanf("%lf %lf %lf",&W,&T,&L);
		double max = (W>T?W:T)>L?(W>T?W:T):L;
		mul *= max;
		/*判断赔率最大场次*/
		if(max == W)
			res[i] = 'W';
		else if(max == T)
			res[i] = 'T';
		else
			res[i] = 'L';
	}
	/*格式化输出*/
	for(int i=0;i<3;i++)
		printf("%c ",res[i]); 
	/*案例里的37.98错了，是37.97*/
	/*不需要四舍五入*/
	printf("%.2lf",(mul*0.65-1)*2);
}

