#include <stdio.h>
int main()
{
    int x;
    double s= 0, a;
    x= 0;
    
    /*  Author: Sorowar Mahabub, 01521-564157  */
    
    while(x < 2)
    {
        scanf("%lf", &a);
        if(a >= 0 && a <= 10)
        {
            s += a;
            x++;
        }
        else
        {
            printf("nota invalida\n");
        }
        
    }
    printf("media = %.2lf", s/2);
    
    return 0;
}