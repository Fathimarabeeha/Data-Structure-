#include<stdio.h>
#include<stdlib.h>
void main()
{
int u,v,n,i,j,ne = 1;
int visited[10] = {0}, min, mincost = 0, cost[10][10];

printf("\n Enter the number of node:");
scanf("%d",&n);
// Input the adjacency matrix
printf("\nEnter the adjacency matrix:\n");
for(i = 1; i <= n; i++){
   for(j=1; j<=n;j++){
      scanf("%d",&cost[i][j]);
      if(cost[i][j]==0){
         cost[i][j]=999;    // No edge, set to a high value
        }
   }
 }     
// Initialize visited array (start with node 1 as visited)
visited[1]=1;
printf("\n");
 
 
// Prim's Algorithm
while(ne<n){
   min=999;      // Start with a large value for minimum edge cost
   for(i=1; i<=n; i++){
     for(j=1; j<=n; j++){
 // Select the minimum edge that connects a visited node with a non-visited node
         if(cost[i][j] < min && visited[i] != 0 && visited[j] == 0)
{
min=cost[i][j];
u=i;
v=j;
}
}
}

// Output the selected edge and add its cost to mincost
printf("\n Edge %d: (%d,%d) cost: %d", ne++, u, v, min);
mincost += min;
visited[v] = 1;
cost[u][v] = cost[v][u] = 999;
}
printf("\n Minimum cost=%d\n", mincost);
}
