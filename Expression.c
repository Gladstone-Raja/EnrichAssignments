#include<stdio.h>
#include<ctype.h>

int check(char a,char b[])
{
	int i;
	for(i=0;b[i]!='\0';i++)
	{
		if(a == b[i])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	char a[50],b[20],count=0,i,k=0;
	printf("\nEnter the expression : ");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(isalpha(a[i])&&check(a[i],b))
		{
			count++;
			b[k++]=a[i];
		}
	}	
	printf("\nThe no. of variables : %d \n",count);
	return 0;
}
