#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5];
    int i, b;
    for(i=0; i<=4; ++i)
    {
        scanf("%d", &a[i]);
    }
    for (i=0; i<=4; i++)
    {
        printf( "ind %d = zn %d\n", a[5], a[i] );
    }
    scanf("%d", &b);
    i=0;
    while(a[i]!=b && i<5)
    {
        ++i;
    }
    if(a[i]==b)
    {
        printf("%d  %d",b,i);
    }
    else
    {
        printf("net %d", -1);
    }
    return 0;
}
