#include <stdio.h>
#include <stdlib.h>

int main()
{
    double v=1.0;
    int x, p;
    printf("chislo: ");
    scanf("%d", &x);
    printf("stepen: ");
    scanf("%d", &p);
    if(p>=0)
    {
        for(int i=1; i<=p; ++i)
        {
            v=v*x;
        }
    }
    if(p<0)
    {
        for(int i=0; i>p; --i)
        {
            v=v*x;
        }
        v=1/v;
    }
    printf("%f", v);
    return 0;
}
