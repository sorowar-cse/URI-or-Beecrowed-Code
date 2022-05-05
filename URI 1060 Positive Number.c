#include<stdio.h> 
int main() 
{
    double a, b, c, d, e, f;
    scanf("%lf%lf%lf%lf%lf%lf", &a,&b,&c,&d,&e,&f);
    
    if (a>0)
    {
        a = 1;
    }
    else a = 0;
    if (b>0)
    {
        b = 1;
    }
    else b = 0;
    if (c>0)
    {
        c = 1;
    }
    else c = 0;
    if (d>0)
    {
        d = 1;
    }
    else d = 0;
    if (e>0)
    {
        e = 1;
    }
    else e = 0;
    if (f>0)
    {
        f = 1;
    }
    else f = 0;
    
    int x = a+b+c+d+e+f;
    printf("%d valores positivos\n", x);
    return 0;
}
 
                