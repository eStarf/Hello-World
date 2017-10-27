#include <stdio.h>
int main()
{float a,b;
scanf("%lf%lf",&a,&b);
float c=a-b;
int x=c<=1e-6&&c>=-1e-6;
printf("1为相等，0为不等，结果是%d\n",x);
return 0;
}
