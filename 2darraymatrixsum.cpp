#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],r1,c1,i,j;
	printf("enter row and column size");
	scanf("%d%d",&r1,&j);
	printf("enter a matrix values");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf(" %d",&a[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
    		for(j=0;j<c1;j++)	
		printf("\n enter b matrix values");
		{
			scanf(" %d",&b[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		 c[i][j]=a[i][j]+b[i][j];	
		}
	}
	printf("display matrix is \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf(" %d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
