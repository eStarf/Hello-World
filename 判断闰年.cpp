#include<stdio.h>
int  main(){
	int a,b,c,d;
	scanf("%d",&a);
	b=a%100;
	c=a%400;
	d=a%4;
	if(b=0){
		if(c=0)
		printf("%d是闰年\n",a);
		else printf("%d不是闰年\n",a);
	
	}
	else if(d=0)
	printf("%d是闰年\n",a);
	else printf("%d不是闰年\n",a);
	return 0;
}
