#include<stdio.h>
#include<string.h>
int str_len(const char *s)
{
	int n=0;
	for(n=0;*s!='\0';++s)	
	     n++;
	return n;   
}
void main()
{
	char s[100];
	printf("enter a word:");
	scanf("%s",&s);
	printf("length of a given string is %d",str_len(s));
}