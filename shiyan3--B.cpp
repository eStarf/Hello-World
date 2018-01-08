#include<stdio.h> 
#include<string.h>
int hexcmp(char* hex1, char* hex2);
int main(){
	int m;
	char *a,*b;
	
	
	m=hexcmp(a,b);
    printf("%d",m);
	return 0;
}
int hexcmp(char* hex1, char* hex2)
{
	int c;
	gets(hex1);
	gets(hex2);
	if(strlen(hex1)>strlen(hex2))
	 c=1;
	else if(strlen(hex1)<strlen(hex2))
	 c=-1;
	else
	 c=strcmp(hex1,hex2);
	  return c;
}
