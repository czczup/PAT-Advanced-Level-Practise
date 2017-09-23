#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		long long a,b,c;
		/*无溢出0，正溢出1，负溢出-1*/
		int flag = 0;
		scanf("%lld %lld %lld",&a,&b,&c);
		/*必须要有res,不然会错误*/
		long long res = a + b;
		if(a>0 && b>0 && res<0)//正溢出 
			flag = 1;
		else if(a<0 && b<0 && res>=0)//负溢出 
			flag = -1; 
		else if(res>c)
			flag = 1;
		else flag = -1; 
	    if(flag==1)
	        printf("Case #%d: true\n",i);
	    else
	        printf("Case #%d: false\n",i);
	}
}

