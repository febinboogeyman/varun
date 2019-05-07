#include<stdio.h>
int a[10][10],visited[10],n,count=0;
void dfs(int i)
{
	count++;
    int j;
    visited[i]=1;
	for(j=0;j<n;j++)
    {
    	if(visited[j]!=1 && a[i][j]!=0)
            dfs(j);
   	}
}
void main()
{
	int i,j,seg=0;
	printf("Enter the number of sides:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		visited[i]=0;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			scanf("%d",&a[i][j]);
		}
	}
	while(count<n)
	{
		for(i=0;i<n;i++)
			if(visited[i]==0)
			{
				seg++;
				dfs(i);
			}
	}
	printf("\n\n\n\n\n\n\n\n\n");
	for(i=0;i<n;i++)
		printf("%d\n",visited[i]);
	printf("\n\n\n\nSegements=%d\n",seg);
}