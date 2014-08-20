#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stack [100];
    int top=-1, a, b;
    char c;
    do{
        scanf("%c", &c);
    switch(c){
        case '+':
        a=stack[top--];
        b=stack[top--];
        stack[++top]=a+b;
        break;
         case '-':
        a=stack[top--];
        b=stack[top--];
        stack[++top]=a-b;
        break;
         case '*':
        a=stack[top--];
        b=stack[top--];
        stack[++top]=a*b;
        break;
         case '/':
        a=stack[top--];
        b=stack[top--];
        stack[++top]=a/b;
        break;
         case '0':
        stack[++top]=0;
        break;
         case '1':
        stack[++top]=1;
        break;
         case '2':
        stack[++top]=2;
        break;
         case '3':
        stack[++top]=3;
        break;
         case '4':
        stack[++top]=4;
        break;
         case '5':
        stack[++top]=5;
        break;
         case '6':
        stack[++top]=6;
        break;
         case '7':
        stack[++top]=7;
        break;
         case '8':
        stack[++top]=8;
        break;
         case '9':
        stack[++top]=9;
        break;
      }
    }
    while(c!='=');
    printf("%d\n", stack[top]);
    return 0;
}
