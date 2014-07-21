#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, a, max, min;
    scanf("%d", &n);
    scanf("%d", &max);
    min=max;
    for(i=1; i<n; ++i)
    {
        scanf("%d", &a);
        if(a>max)
        {
            max=a;
        }
        if(a<min)
        {
            min=a;
        }
    }
    printf("%d %d", max, min);
    return 0;
}
