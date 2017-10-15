#include <stdio.h>
#include <math.h>
#include <string.h>
/*判断是不是素数*/
bool isprime(int number){
	if(number<=1)
		return false;
	for(int i=2;i<=(int)sqrt(number);i++){
		if(number%i == 0)
			return false;
	}
	return true;
}
/*以10进制返回进制转换且反转后的结果*/
int radix_change(int num,int radix){
	int number_of_radix[20];
	int cnt = 0,result = 0;
	while(num!=0){
		number_of_radix[cnt++] = num % radix;
		num /= radix;
	}
	for(int i=0;i<cnt;i++){
		result = result*radix + number_of_radix[i];
	}
	return result;
}

int main(){
	int num=0,radix;
	while(1){
		scanf("%d",&num);
		if(num<0) break;
		scanf("%d",&radix);
		bool res = isprime(num) && isprime(radix_change(num,radix));
		res==true?printf("Yes\n"):printf("No\n");
	}
}
