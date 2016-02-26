#include<stdio.h>

int binarysearch(int a[],int element,int start,int end)
{
	int middle=end/2;
	if(a[middle]==element)
	{
		return middle;
	}
	else if(a[middle]>element)
	{
		binarysearch(a,element,0,middle);
	}
	else 
	{
		binarysearch(a,element,middle+1,end);
	}
}

int main()
{
	int a[10],i,n,element,index;
	printf("\nEnter the no.of elements : ");
	scanf("%d",&n);
	printf("\nEnter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the element to be searched : ");
	scanf("%d",&element);
	index=binarysearch(a,element,0,n);
	printf("%d",index);
}
	
