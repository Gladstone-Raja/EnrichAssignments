#include<stdio.h>

int main()
{
	int a[10][10],i,j,ord,t;

	//Get Matrix Order
	printf("\nEnter the matrix order:");
	scanf("%d",&order);
	
	//Get Matrix Values
	printf("\nEnter the matrix values:");
	for(i = 0;i < ord;i++)
	{
		for(j = 0;j < ord;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	//Self Transposal of the Matrix
	for(i = 0;i < ord;i++)
	{
		for(j = 0;j < i;j++)
		{
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
	}

	//Display
	printf("\nThe Transposed matrix is:\n");
	for(i = 0;i < ord;i++)
	{
		for(j = 0;j < ord;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}	