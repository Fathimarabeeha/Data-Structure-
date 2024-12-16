#include<stdio.h>
#include<stdlib.h>

int i, j, k, u, v, rv, ru, n, ne = 1;
int min, mincost = 0, cost[9][9],parent[9];

int find(int u) {
while(parent[u] !=u){
     parent[u]=parent[parent[u]];  // Path compression
     u=parent[u];
   }
  return u;
}

void uni(int ru, int rv){
parent[rv] = ru;
}

void main()
{

// Initialize the cost matrix with user input
printf("\nEnter the number of vertices:\n");
scanf("%d",&n);
printf("\nEnter the cost adjacency metrix:\n");
for(i=1;i<=n;i++)
{
for(j=1; j<=n; j++)
{
scanf("%d",&cost[i][j]);
if(cost[i][j]==0){
cost[i][j]=999;  // No edge, set to a high value
}
}
for(i=1; i<=n;i++)   // Initialize parent array
{
parent[i]=i;
}
printf("The edges of minimum cost spanning tree are:\n");


// Kruskal's Algorithm
while(ne<n)
{    
  min=999;
  for(i=1; i<=n; i++)
  {
   for(j=1; j<=n; j++)
   {
    if(cost[i][j]<min)
    {
     min=cost[i][j];
     u=i;
     v=j;
    }
   }
 }
ru=find(u);
rv=find(v);

if(ru != rv)   // If the nodes are not connected
{
uni(ru,rv);
printf("%d edge (%d,%d)=%d\n",ne++,u,v,min);
mincost+=min;
}
cost[u][v]=cost[v][u]=999;   // Remove the edge from the cost matrix after processing
}
printf("\nminmum cost=%d\n",mincost);
}
