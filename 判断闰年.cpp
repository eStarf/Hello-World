#include<stdio.h>
int  main(){
	int a,b,c,d;
	scanf("%d",&a);
	b=a%100;
	c=a%400;
	d=a%4;
	if(b=0){
		if(c=0)
		printf("%d������\n",a);
		else printf("%d��������\n",a);
	
	}
	else if(d=0)
	printf("%d������\n",a);
	else printf("%d��������\n",a);
	return 0;
}
