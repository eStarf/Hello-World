#include<stdio.h>
int main() 
{
	int c;
	c=getchar();
	if(c<=90&&c>=65)
	{
	  c+=32;
	  printf("%c\n",c);
	  }
	else if(c>=97&&c<=122)
	{
	  c-=32;
	  printf("%c\n",c);
	}  
	else 
	   printf("error\n");
	
	
	return 0;
	
}
