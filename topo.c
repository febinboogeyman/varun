#include<stdio.h>
int a[100][100],visited[100],stack[100],top=0,n;
void push(int s)
{
	stack[top++]=s;
}
void dfs(int s)
{
	int i;
    visited[s] = 1;
    for(i=0;i<n;i++)
    {
    	if(a[s][i]==1)
	    	if(visited[i] == 0)
	    		dfs(i);
    }
    push(s);
}
void main()
{
	int i,j,temp=0;
	printf("Enter the number of vertices:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	do
	{
		dfs(temp);
		for(i=0;i<n;i++)
		{
			if(visited[i]==0)
			{
				temp=i;
				break;
			}
			else temp=0;
		}

	}while(temp!=0);
	printf("The topologically sorted order is:\n");
	for(i=top-1;i>=0;i--)
	{
		printf("%d\n",stack[i] );
	}
}