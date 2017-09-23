#include <stdio.h>
int main()
{
	double y1[1001]={0},y2[1001]={0},res[2001]={0};
	int n1,n2;
	/*读取第一个多项式*/
	scanf("%d",&n1);
	for(int i=0;i<n1;i++){
		int exp;
		double coef;
		scanf("%d %lf",&exp,&coef);
		y1[exp] = coef;
	} 
	/*读取第二个多项式*/
	scanf("%d",&n2);
	for(int i=0;i<n2;i++){
		int exp;
		double coef;
		scanf("%d %lf",&exp,&coef);
		y2[exp] = coef;
	}
	/*多项式相乘*/
	for(int i=0;i<1001;i++){
		for(int j=0;j<1001;j++){
			if(y1[i]!=0.0 && y2[j]!=0.0)
				res[i+j] += y1[i]*y2[j];
		}
	}
	/*非零项计数*/
	int cnt = 0;
	for(int i=0;i<2001;i++){
		if(res[i]!=0.0)
			cnt++;
	}
	/*格式化输出*/
	printf("%d",cnt);
	for(int i=2000;i>=0;i--){
		if(res[i]!=0.0)
			printf(" %d %.1lf",i,res[i]);
	}
	return 0;
	
}

