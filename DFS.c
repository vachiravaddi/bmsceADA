#include<stdio.h>
#include<conio.h>

int a[10][10];
int n,vis[10];
int dfs(int);

void main()
{
int i,j,src,ans;

for(j=1;j<=n;j++)
{
vis[j]=0;
}
printf("\n enter the no of nodes: \t");
scanf("%d",&n);
printf("\n enter the adjacency matrix:\n ");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n enter the source node:\t");
scanf("%d",&src);
ans = dfs(src);
if(ans==1)
{
printf("\n graph is connected\n ");
}
else
{
printf("\n gragh is not connected\n");
}
getch();
}
int dfs(int src)
{
int j;
vis[src]=1;
for(j=1;j<=n;j++)
{
if(a[src][j]==1 && vis[j]!=1)
{
dfs(j);
}
}
for(j=1;j<=n;j++)
{
if(vis[j]!=1)
{
printf("\n node %d is not reachable\n",j);
}
else
{
printf(" \n node %d is reachable \n" ,j);
}
}
}