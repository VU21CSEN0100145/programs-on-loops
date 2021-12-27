#include<stdio.h>
int main()
{
	int i=1,s=0,n,x;
	scanf("%d",&n);
	while(i<=n)
	{   
		x=i*i;
		s=s+x;
		i++;
		printf("%d\n",s);
	}
	
}
