#include<stdio.h>
int main(){
	int n,x,y=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	 scanf("%d",&a[i]);
	scanf("%d",&x);
	for(int j=0;j<n;j++)
	  y=y+x==a[j]?0:1;
    if(y>0)
      for(int t=0;t<n;t++)
        if(x==a[t])
         printf("%d\t",t);
    else 
      printf("-1");
    return 0;
}
