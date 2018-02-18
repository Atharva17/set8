#include <stdio.h>
int main()
{
	char a[50];
	int i,flag=0;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	 if(a[i]=='a' || a[i]=='e' ||a[i]=='i' ||a[i]=='o' || a[i]=='u')
	  flag++;
	  if(flag>0)
	  printf("yes");
	return 0;
}
