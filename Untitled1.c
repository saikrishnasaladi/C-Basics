
#include<stdio.h>
void main()
{
	int a,b,s,d,m,D,M;
	a = 13;
	b = 6;
	s = a+b;
	d = a-b;
	m = a*b;
	D = a/b;
	M = a%b;
	printf("sum of %d and %d is: %d\n",a,b,s);
	printf("difference of %d and %d is: %d\n",a,b,d);
	printf("product of %d and %d is: %d\n",a,b,m);
	printf("quotion of %d and %d is: %d\n",a,b,D);
	printf("remainder of %d and %d is: %d",a,b,M);
	
}

