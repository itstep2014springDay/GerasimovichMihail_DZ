#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L, x, p=0,n=1;
    printf("chislo L:");
    scanf("%d", &L);

    printf("chislo x:");
    scanf("%d", &x);

    while(n<=L)
    {
        n=x*x;
        ++p;
    }
    printf("stepen p=%d", p);
    return 0;
}
