#include<stdio.h>
int main()
{
int num,digit;
scanf("%d",&num);
while(num!=0)
{
	digit=num%10;
	if(digit%2==1)
	printf("%d ",digit);
	num/=10;
}
return 0;
}
