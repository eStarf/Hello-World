#include<stdio.h>
double Func(double a,double b,double c,double d,double e,double f);
int main(void)
{
	double a,b,c,d,e,f,x,y;
	printf("请输入6个实数：");
	scanf("%1f%1f%1f%1f%1f%1f",&a,&b,&c,&d,&e,&f);
	x=Func(a,b,c,d,e,f);
	y=Func(a,b,c,d,e,f);
	printf("x=%1d.\n,y=%1d.\n",x,y);
	return 0;
	
	
}
double Func(double a,double b,double c,double d,double e,double f)
{double x;double y;
x=(b*f-c*e)/(a*e-b*b);
y=(a*f-d*c)/(d*b-a*e);
return x,y;
}
