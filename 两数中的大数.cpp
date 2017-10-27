#include<stdio.h>
double Func(double a,double b);
int main()
{
	double a,b,x;
	scanf("%lf%lf",&a,&b);  
    x=Func(a,b);
printf("the bigger number is %lf.\n",x);
return 0;
}
double Func(double a,double b)
{double z;
 if(a>b)

 {
	z=a;
 }
 else
 {
 z=b;
 }
return z;
}
