#include<stdio.h>
int main()
{
	int n,i=1,s;
	printf("enter a value for n:/");
	scanf("%d",&n);
	while(i<=n)
	{
		s=n*(n+1)/2;
		i++;
	}
	printf("%d",s);
}
