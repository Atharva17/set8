#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[50],b[50];
	int i,l,count=0;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	b[i]=a[l-i-1];
	for(i=0;i<l;i++)
	if(a[i]==b[i])
	count++;
	if(count==l)
	printf("Yes");
	else
	printf("no");
            return 0;
}
