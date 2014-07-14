#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    d = a + b;
    if(d>c)
    {
        printf("%d + %d > %d \na+b>d ",a ,b, c, a+b>d);
    }
    else
    {
       printf("%d + %d < %d \na+b<d ",a ,b, c, a+b<d);
    }

return 0;
}
