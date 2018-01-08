#include<stdio.h>
int main(){
	
	int c1=0,c2=0,c;
	int str1,str2;
	
	while((str1=getchar()!='\0'))
	c1+=str1;
	
	
	
	
	
	while((str2=getchar())!='\0')
	c2+=str2;
	
	
	
	c=c1-c2;
	printf("%d\n",c);
	return 0;
}
