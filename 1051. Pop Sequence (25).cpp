#include <stdio.h>
#include <stack>
using namespace std;
int main(){
	int M,N,K; 
	scanf("%d %d %d",&M,&N,&K);
	for(int i=0;i<K;i++){
	    stack<int> s;
	    int num[N];
	    for(int j=0;j<N;j++){
	    	scanf("%d",&num[j]);
		}
	    int current = 0;
		bool flag = false;
	    for(int j=1;j<=N;j++){
	        s.push(j);
	        if(s.size()>M)
	            break;
	        while(!s.empty() && s.top() == num[current]){
	            s.pop();
	            current++;
			}
		}
	    if(current == N)
	        flag = true;
	    if(flag == true)
	        printf("YES\n");
	    else
	        printf("NO\n");
	}
}

