#include <stdio.h>
int main()
{
    int N, x, a, b;
    scanf("%d", &N);
    double s;
    x= 0;
    
    /*  Author: Sorowar Mahabub, 01521-564157  */
    
    while(x < N)
    {
        scanf("%d%d", &a, &b);
        if(b == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            s= (double)a/b;
            printf("%.1lf\n", s);
        }
        x++;
    }
    
    return 0;
}