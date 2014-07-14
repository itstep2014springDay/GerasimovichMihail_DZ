#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    c=a/b;
    if(c!=0)
    {
        printf("a/b\n b!/a");
    }
    else
    {
        printf("b/a\na!/b");
    }

return 0;
}
