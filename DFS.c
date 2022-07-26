#include<stdio.h>
#include<conio.h>

int a[10][10];
int n,vis[10];
void dfs(int src){
    vis[src] = 1;
    printf("node is %d \n",src);
    for (int i=1;i<=n;i++){
        if(a[src][i] == 1 && vis[i] != 1){
            dfs(i);
        }
    }
}
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
dfs(src);
getch();
}
