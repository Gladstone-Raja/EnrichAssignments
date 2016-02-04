#include<stdio.h>

float root(float n)
{

	float x=n;
	float y=1;
	float e=0.00001;	/* e decides accuracy */
	while((x-y)>e)
	{
		x=(x+y)/2;
		y=n/x;
	}
	return x;
}

int main()
{
	int n;
	float a;
	printf("\nEnter n:");
	scanf("%d",&n);
	a=root(n);
	printf("\nSquare Root : %f",a);
	return 0;
}		
