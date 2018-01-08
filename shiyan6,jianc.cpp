#include<stdio.h>
int f(int y);
int main() {
	int m,x;
	int y;
	int w;
	int v[w];
	scanf("%d",&y);
	for(int j=0;j<y;j++)
	{
	  scanf("%d",&m);
	  int a[m];
	
	  for(int i=0;i<m;i++)
	  {
		scanf("%d",&a[i]);
	   }
	   
	   v[0]=a[0];
	   for(int e=0;e<m;e++){
	
	    
	    for(int i=0;i<m;i++)
         	{
	      	if(v[e]>a[i])
		     v[e]=a[i];
          	}
	   }
	}
	for(int i=0;i<m;i++)
	printf("%d\n",v[i]);
	
	return 0;
}

