#include<stdio.h>
int findmin2(int x) ;
int main()
{
	int n,w,m,y=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	  scanf("%d",&m);
	  int a[m];
	  for(int j=0;j<m;j++)
	  {
	    scanf("%d",&a[m]);
	  }
	  for(int j=0;j<m;j++)
	   {  
		 if(a[j]==a[j+1])
		   y++;
		}
	  if(m<2)
	    printf("ERROR\n");
	  else if(y==m-1)  
	    printf("ERROR\n");
	  else {
	  	int min,min2;
	
	     
	    min=a[m-1];
	    int i;
 	    for(i=m-1;i>=0;i--)
	   {
	     	if(min>a[i])
		      min=a[i];
	    }
	    int j=0;
	    min2=a[0];
	    while(j!=i&&j<=m-1)
	    {
		  if(min2>a[j])
		   {
		
		     min2=a[j];
		     j++;
		     if(j=i)
		       j++; 
		   }
	 
	   
       	}
		printf("%d",min2);
	  	}
     
	} 
	return 0;
}

	
	

