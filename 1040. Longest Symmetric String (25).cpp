#include <stdio.h>
#include <string.h>
int main()
{
	char string[1000];
	gets(string);
	int oddmaxlen = 0,evenmaxlen = 0,len = strlen(string);
	for(int i=1;i<len;i++){
		/*计算最短边长*/
		int minside = i < len-i ? i : len-i;
		/*数奇数回文串*/
		int cnt = 0;
		for(int j=1;j<=minside;j++){
			if(string[i-j] == string[i+j])
				cnt++;
			else
				break;
		}
		oddmaxlen = oddmaxlen > cnt ? oddmaxlen : cnt; 
		/*数偶数回文*/
		cnt = 0;
		for(int j=0;j<=minside;j++){
			if(string[i-j] == string[i+1+j])
				cnt++;
			else
				break;
		}
		evenmaxlen = evenmaxlen > cnt ? evenmaxlen : cnt; 
	}
	if(oddmaxlen*2+1 > evenmaxlen*2)
		printf("%d",oddmaxlen*2+1);
	else
		printf("%d",evenmaxlen*2);
}

