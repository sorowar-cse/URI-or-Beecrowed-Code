#include<stdio.h>

int main()
{
    int a, b, c, d, e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    int f, g, h, i, j;
    if(a % 2 == 0)
    {
        f= 1;
    }
    else f= 0;
    if(b % 2 == 0)
    {
        g= 1;
    }
    else g= 0;
    if(c % 2 == 0)
    {
        h= 1;
    }
    else h= 0;
    if(d % 2 == 0)
    {
        i= 1;
    }
    else i= 0;
    if(e % 2 == 0)
    {
        j= 1;
    }
    else j= 0;
    
    int x= f+g+h+i+j;
    printf("%d valores pares\n", x);
    return 0;
}