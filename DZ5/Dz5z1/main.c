#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float V,S,L;
    int R, H;
    printf("enter r= ");
    scanf("%d", &R);
    printf("enter H= " );
    scanf("%d", &H);
    V=1*(3.14*R*R*H)/3;
    printf("volume= %.2f\n", V);
    L=sqrt(R*R+H*H);
    S=3.14*R*(R+L);
    printf("area= %.2f\n", S);

    return 0;
}
