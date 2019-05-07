#include <stdio.h>
void main()
{
	int a[20][20],n,i,j,k,m1,m2;
	printf("Enter the number of vertices:");
	scanf("%d",&n);
	printf("Enter the adjacency matrix:\n");
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				m1=a[i][j];
				m2=a[i][k]+a[k][j];
				if(m2<m1)
					a[i][j]=m2;
			}
		}
	}
	printf("\n\n\nThe final matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}