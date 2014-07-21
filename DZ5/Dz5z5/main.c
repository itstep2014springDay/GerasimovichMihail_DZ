#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, ar, a1=1, a2=1;
    scanf("%d", &n);
    if(n<3)
    {
        ar=1
           printf("%d", ar);
    }
    else
    {
        for(i=3; i<=n; ++i)
        {
            ar=a1+a2;
            printf("%d\n", ar);
            a1=a2;
            a2=ar;
        }

    }

    return 0;
}
