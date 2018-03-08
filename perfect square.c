#include <stdio.h>
int main(void) 
{
	int n1,n2,i,res=0,count=0;
	scanf("%d%d",&n1,&n2);
	res=n1*n2;
	for(i=1;i<res;i++)
	if(i*i==res)
	  count++;
	  if(count>0)
	  printf("Yes");
	  else
	  printf("No");
            return 0;
	}
