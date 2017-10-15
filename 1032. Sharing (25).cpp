#include <stdio.h>
typedef struct Node{
	int flag;
	char data;
	int next;
}Node;

int main(){
	int string1,string2,num;
	scanf("%d %d %d",&string1,&string2,&num);
	Node n[100000];
	for(int i=0;i<num;i++){
		int address,next;
		char data;
		scanf("%d %c %d",&address,&data,&next);
		n[address].flag = 0;     //0表示未被访问 
		n[address].data = data;
		n[address].next = next;
	}
	/*遍历第1条链表,访问过的结点标记为1*/
	while(string1!=-1){
		n[string1].flag = 1;
		string1 = n[string1].next;
	}
	/*遍历第2条链表，找到第1个被标记为1的结点*/
	while(string2!=-1){
		if(n[string2].flag==1){
			printf("%05d",string2);
			return 0;
		}
		string2 = n[string2].next;
	}
	printf("-1");
	return 0;
}

