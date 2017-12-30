#include<stdio.h>
int And(int w,int y);
int main()
{
	int n,x,sum=0;
	scanf("%d",&n);
	for(int j=0;j<n;j++)
	{
	  sum=And(x,sum);   
	  n--;
    }
	printf("%d",sum);
	return 0;
}
int And(int w,int y) 
{
	for(int i=0;i<n;i++)
	   { 
	     w=n-i;
	     y=y+x;//累计求n,n-1,n-2....1的值。 
	    }
	return y;    
}
