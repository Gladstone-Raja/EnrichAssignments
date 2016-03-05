#include<stdio.h>

int main()
{
	int a[20],b[20],i,j=0,n,half;
	printf("\nEnter the no.of digits : ");
	scanf("%d",&n);
	printf("\nEnter the digits : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	half=n/2;
	if(n%2==0)
	{
		for(i=half;i<n;i++)
		{
			b[j++]=a[i];
		}
		for(i=0;i<half;i++)
		{
			b[j++]=a[i];
		}
	}
	else
	{
		for(i=half+1;i<n;i++)
		{
			b[j++]=a[i];
		}
		b[half]=a[half];
		j++;
		for(i=0;i<half;i++)
		{
			b[j++]=a[i];
		}
	}	
	printf("\nThe exchanged array is : ");
	for(i=0;i<n;i++)
	{
		printf(" %d ",b[i]);
	}
	return 0;
}
