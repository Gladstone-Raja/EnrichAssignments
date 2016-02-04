#include<stdio.h>

int prime(int n)
{
	int i;
	for(i=2;i<(n/2);i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n;
	printf("\nEnter n:");
	scanf("%d",&n);

	while(1)
	{
		if(prime(n))
		{
			break;
		}
		n++;
	}
	printf("\nThe next prime no. : %d",n);
	return 0;
}
