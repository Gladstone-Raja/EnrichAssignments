#include<stdio.h>

int main()
{
	int a[20],x,n,i,index=-1,j,temp;
	printf("\nEnter the no.of elements in the array : ");
	scanf("%d",&n);
	printf("\nEnter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter x : ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]>x)
		{
			if(a[i]<a[i+1])
			{
				index=i;
				break;
			}
			else if(a[i]==a[i+1])
			{
				index=i+1;
			}
		}
	}
	printf("\nThe index is : %d ",index); 
	return 0;
}
