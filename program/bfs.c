#include<stdio.h>
int g[10][10],visited[10],q[10],v,f=-1,r=-1;

void bfs(int x){
	for(int i=0;i<v;i++){
		if(visited[i]==0 && g[x][i]==1){
			r++;
			q[r]=i;
			visited[i]=1;
			printf("\n%d",i);
		}
	}
	f++;
	if(f<=r){
		bfs(q[f]);
	}
}


void main(){
	printf("Enter the number of verites");
	scanf("%d",&v);
	
	printf("Enter the matrix\n");
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			scanf("%d",&g[i][j]);
		}
	}
	
	for(int i=0;i<v;i++){
		visited[i]=0;
	}
	int s;
	printf("\nEnter the starting vertex ");
	scanf("%d",&s);
	
	f=r=0;
	q[r]=s;
	visited[s]=1;
	printf("%d",s);
	
	bfs(s);
}
	
