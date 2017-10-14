#include <stdio.h>
#include <string.h>
int main() {
	int n,minlen=256,cnt=0;
	char str[100][256];
	scanf("%d",&n);
	getchar();
	for(int i=0; i<n; i++){
		gets(str[i]);
		int len = strlen(str[i]);
		minlen = len < minlen ? len : minlen;
		for(int j=0; j<len/2; j++){
			char temp = str[i][j];
			str[i][j] = str[i][len-j-1];
			str[i][len-j-1] = temp;
		}
	}
	for(int i=0; i<minlen; i++){
		char temp = str[0][i];
		bool issame = true;
		for(int j=1; j<n; j++){
			if(str[j][i] != temp){
				issame = false;
				break;
			}
		}
		if(issame == true)
			cnt++;
		else
			break;
	}
	if(cnt){
		for(int i=cnt-1; i>=0; i--){
			printf("%c",str[0][i]);
		}
	} else {
		printf("nai");
	}
	return 0;
}

