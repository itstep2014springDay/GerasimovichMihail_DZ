#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d", &a);//chislo//
    scanf("%d", &b);//delitel//
   while(a!=0)
    {
    printf("%d\n",a, a=a/b);
    }
    if(a<=0){
    printf("finish");}
    return 0;
}
