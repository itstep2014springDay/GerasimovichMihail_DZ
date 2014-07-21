#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for( i=0; i<=127; ++i)
    {
        if(i%16==0)
        {
            printf("\n");
        }
        printf("%c",i );
    }
    return 0;
}
