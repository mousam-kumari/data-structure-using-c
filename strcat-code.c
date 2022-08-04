#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100],s2[100];
	printf("enter the first word:");
	scanf("%s",&s1);
	printf("enter the second word:");
	scanf("%s",&s2);
	printf("concatenated string: %s",strcat(s1,s2));
}