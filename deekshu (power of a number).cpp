#include <stdio.h>
main() 
{
    int x,y,z=1,i= 1;
    scanf("%d%d", &x, &y);
    while(i<=y)
    {
        z=z*x;
        i++;
    }
    printf("%d",z);
}
