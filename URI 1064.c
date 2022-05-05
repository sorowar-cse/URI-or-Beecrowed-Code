#include<stdio.h> 
int main() 
{
    double a, b, c, d, e, f, s, sum;
    scanf("%lf%lf%lf%lf%lf%lf", &a,&b,&c,&d,&e,&f);
    int m, n, o, p, q, r;
    sum = 0.0;
    
    if (a>0)
    {
        m = 1;
        sum += a;
    }
    else m = 0;
    if (b>0)
    {
        n = 1;
        sum += b;
    }
    else n = 0;
    if (c>0)
    {
        o = 1;
        sum += c;
    }
    else o = 0;
    if (d>0)
    {
        p = 1;
        sum += d;
    }
    else p = 0;
    if (e>0)
    {
        q = 1;
        sum += e;
    }
    else q = 0;
    if (f>0)
    {
        r = 1;
        sum += f;
    }
    else r = 0;
    
    int x = m+n+o+p+q+r;
    printf("%d valores positivos\n", x);
    
    s = sum/x;
    printf("%.1lf\n", s);
    return 0;
}
 
                