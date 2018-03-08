#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[50];
	int i,l,count=0;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
	if(l%2==0)
	{
	a[l/2]='*';
	a[l/2-1]='*';
	}
	else
	a[l/2]='*';
	printf("%c",a[i]);
	}
            return 0;
	}
