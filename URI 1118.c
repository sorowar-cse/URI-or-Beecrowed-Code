#include <stdio.h>
int main()
{
    int x, y, m, n;
    double s= 0, a;
    
    
    /*  Author: Sorowar Mahabub, 01521-564157  */
    
    while(1)
    {
    n= 0;
    for(x= 0; x < 100; x++)
    {
        scanf("%lf", &a);
        if(a >= 0 && a <= 10)
        {
            s += a;
            n++;
        }
        else
        {
            printf("nota invalida\n");
        }
        if(n == 2)
        {  
            printf("media = %.2lf\n", s/2);
            s= 0;
            break;
        }
    }
    
    for(y= 0; y<100; y++)
    {
        scanf("%d", &m);
        printf("novo calculo (1-sim 2-nao)\n");
        if(m == 1 || m == 2)
        break;
    }
    if(m == 1)
    continue;
    else if(m == 2)
    break;
    
    }
    return 0;
}