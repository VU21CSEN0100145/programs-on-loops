#include<stdio.h>
int main()
{
	char alphabet;
	alphabet='A';
	printf("upper case alphabets:\n");
	while(alphabet<='Z')
	{
		printf("%c",alphabet);
		alphabet++;
	}
	return 0;
}
