#include <stdio.h>
int main()
{
	/*读第一行*/ 
	int N,M,C1,C2,inf=99999999;
	scanf("%d %d %d %d",&N,&M,&C1,&C2);
	/*读第二行*/ 
	int num_of_rescue[N];
	for(int i=0;i<N;i++){
		scanf("%d",&num_of_rescue[i]);
	}
	/*初始化*/ 
	int minmap[N][N],map[N][N];
	int res[N][N]={0},cnt[N][N]={0}; 
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			minmap[i][j]=inf;
		}
	}
	/*读取路径,生成矩阵*/ 
	for(int i=0;i<M;i++){
		int c1=0,c2=0,l=0;
		scanf("%d%d%d",&c1,&c2,&l);
		minmap[c1][c2] = l;
		res[c1][c2] = num_of_rescue[c2];
		cnt[c1][c2] = 1;
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			map[i][j] = minmap[i][j];
		}
	}
	/*Floyd算法*/ 
	for(int i=0;i<N;i++){
		for(int j=i;j<N;j++){
			for(int k=0;k<N;k++){
				if(minmap[i][j] >= minmap[i][k] + minmap[k][j]){
					minmap[i][j] = minmap[i][k] + minmap[k][j];
					if(i<k && k<j)
						if(res[i][k]!=0 && res[k][j]!=0)
							res[i][j] = res[i][k] + res[k][j];
				}	
			}
		}
	}
	for(int i=0;i<N;i++){
		for(int j=i;j<N;j++){
			for(int k=0;k<N;k++){
				if(i<k && k<j && minmap[i][j]!=inf){
					if(minmap[i][j] == map[i][k] + map[k][j])
						cnt[i][j] += 1;
					else if(minmap[i][j] > map[i][k] + map[k][j])
						cnt[i][j] = 1;
				}
                	
			}
		}
	}
//	for(int i=0;i<N;i++){
//		for(int j=0;j<N;j++){
//			printf("%d ",minmap[i][j]);
//		}
//		printf("\n");
//	}
	printf("%d %d",cnt[C1][C2],res[C1][C2]+num_of_rescue[C1]);
}

