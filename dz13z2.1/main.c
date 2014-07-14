#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    char b = 64;
    for(int i = n; i != 0; -- i)
    {
        b = b + 1;
        printf("%c\n",b );
    }
    return 0;
}
