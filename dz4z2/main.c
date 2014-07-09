#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, p, n=1;
    printf("chislo:");
    scanf("%d", &x);
    printf("stepen:");
    scanf("%d", &p);
    for(int i=1; i<=p; ++i)
    {
        n=x*n;
    }
    printf("rez=%d", n);
    return 0;
}
