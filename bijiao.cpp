#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b)
	  printf("1\n");
	else if(a<b)
	  printf("-1\n") ;
	else
	  printf("0\n");
	return 0;
}
