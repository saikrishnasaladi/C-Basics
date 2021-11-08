#include<stdio.h>
void main()
{
	int a,b,c;
	 a = 40;
	  b = 20;
	  c = 10;
	  printf("%d\n",(a>b) && (b>c));
	  printf("%d\n",(a>b) || (b>c));
	  printf("%d\n",(a<b) || (b<c));
	  printf("%d\n",(a<b) && (b<c));
	  printf("%d\n",(a>b) && (b<c));
	  printf("%d",(a>b) || (b<c));
}
