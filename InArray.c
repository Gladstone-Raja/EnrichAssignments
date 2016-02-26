#include<stdio.h>

int inarray(int a[],int n,int element)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==element)
			{
				return i;	
			}
	}
	return -1;
}

int main()
{
	int a[10],n,i,element,index;
	printf("\nEnter the no.of elements : ");
	scanf("%d",&n);
	printf("\nEnter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the element to be searched : ");
	scanf("%d",&element);
	index=inarray(a,n,element);
	printf("%d",index);
}
