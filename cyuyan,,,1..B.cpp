#include<stdio.h>
#include<math.h>
int main()
{
	int x=0;
	int n;
	scanf("%d",&n);//¸øn¸³Öµ¡£ 
	int a[n];
	for(int j=0;j<n;j++)
	scanf("%d",&a[j]);
    for(int i=0;i<n;i++)
    {
	  if(a[i]<0)
	    printf("ERROR\n");
	  while(a[i]-x*x>0.01) 
	  {
		x=x+0.01;
	  }	
    	printf("%f\n",x);		  
    }
	
}
    

