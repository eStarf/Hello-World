#include<stdio.h> 
int main()
{
	int n;
	scanf("%d",&n);
	float a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%f",&a[i]) ;
		printf("%f",a[i]);
	}
	return 0;
}
