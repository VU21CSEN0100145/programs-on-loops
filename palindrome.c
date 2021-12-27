#include<stdio.h>
int main()
{
	int num,res=0,chk,c;
	printf("enter a number");
	scanf("%d",&num);
	chk=num;
	while(num>0)
	{
		c=num%10;
		res=res*10+c;
		num=num/10;
	}
	num=chk;
	if(num==res)
	{
		printf("number is palindrome");
	}
	else
	{
		printf("number is not palindrome");
	}
	return(0);
}
