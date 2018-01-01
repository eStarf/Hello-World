#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int c1x[n],c1y[n],c1z[n],w1[n],c2x[n],c2y[n],c2z[n],w2[n],mx[n],my[n],mz[n];
	
	for(int i=0;i<n;i++)
	 {
	 
	  scanf("%d",&c1x[i]);
	  scanf("%d",&c1y[i]);
	  scanf("%d",&c1z[i]);
	  scanf("%d",&w1[i]);
	  scanf("%d",&c2x[i]);
      scanf("%d",&c2y[i]);
      scanf("%d",&c2z[i]);
      scanf("%d",&w2[i]);
      scanf("%d",&mx[i]);
      scanf("%d",&my[i]);
      scanf("%d",&mz[i]);
     }
     
     float d[n],l[n],x[n],y[n];
     
     for(int j=0;j<n;j++)
     {
     	d[j]=sqrt(pow(c1x[j]-c2x[j],2)+pow(c1y[j]-c2y[j],2)+pow(c1z[j]-c2z[j],2));
     	l[j]=(w1[j]*w1[j]+d[j]*d[j]-w2[j]*w2[j])/(2*d[j]);
        x[j]=sqrt(pow((mx[j]-c1x[j]),2)+pow((my[j]-c1y[j]),2)+pow((mz[j]-c1z[j]),2));
        y[j]=sqrt(pow((mx[j]-c2x[j]),2)+pow((my[j]-c2y[j]),2)+pow((mz[j]-c2z[j]),2));
        if(x[j]<=w1[j]||y[j]<=w2[j])
          {
             	if(x[j]*x[j]-l[j]*l[j]==y[j]*y[j]-pow(d[j]-l[j],2))
                  	printf("No\n");
            	else 
                	printf("Yes\n");
          }
         else
          printf("No\n");
      }
    return 0;
}

