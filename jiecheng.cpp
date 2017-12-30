#include<stdio.h>
int func(int a);
int main()
{
	int n,x;
	scanf("%d",&n);
	x=func(n);
	printf("%d",x);
	return 0;
}
int func(int a)
{	
    int cheng;
	if(a==1)
	{
		cheng=1;
	}
	else
	{
		cheng=func(a-1)*a;
	}
	return cheng;
}
