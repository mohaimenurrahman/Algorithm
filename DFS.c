#include<stdio.h>

void DFS(int);
int G[10][10],visited[10],n;//n is no of vertices and graph is sorted in array G[10][10]

void main()
{
    int i,j;
    printf("Enter number of vertices:");

	scanf("%d",&n);

    //adjecency matrix
	printf("Enter adjecency matrix of the graph:\n");

	for(i=0;i<n;i++)
       for(j=0;j<n;j++)
			scanf("%d",&G[i][j]);

    //visited is initialized to zero
   for(i=0;i<n;i++)
        visited[i]=0;

    DFS(0);
}
//DFS function initialization.
void DFS(int i)
{
    int j;
	printf("\n%d",i);
    visited[i]=1;

	for(j=0;j<n;j++)
       if(!visited[j]&&G[i][j]==1)
            DFS(j);
}
