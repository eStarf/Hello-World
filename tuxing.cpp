#include<stdio.h>
int main()
{
	char a[100]="--**-**--";
	char b[100]="-*--*--*-";
	char c[100]="-*-----*-";
	char d[100]="--*---*--";
	char e[100]="---*-*---";
	char f[100]="----*----";
	int m,n;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%s",a);
		}
		printf("\n");
		for(int j=0;j<m;j++)
		{
			printf("%s",b);
		}
		printf("\n");
		for(int j=0;j<m;j++)
		{
			printf("%s",c);
		}
		printf("\n");
		for(int j=0;j<m;j++)
		{
			printf("%s",d);
		}
		printf("\n");
		for(int j=0;j<m;j++)
		{
			printf("%s",e);
		}
		printf("\n");
		for(int j=0;j<m;j++)
		{
			printf("%s",f);
		}
		printf("\n");
	}
}
