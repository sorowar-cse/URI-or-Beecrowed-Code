#include<stdio.h>

int main()
{
    int m, n, x= 0;
    while(1)
    {
        scanf("%d%d", &m, &n);
        if(m == n)
        break;
        if(m < n)
        {
            while(x < m)
            {
                if(m < n)
                printf("Crescente\n");
                else printf("Decrescente\n");
                break;
                x++;
            }
        }
        if(m > n)
        {
            while(x < n)
            {
                if(m < n)
                printf("Crescente\n");
                else printf("Decrescente\n");
                break;
                x++;
            }
        }
    }
    
    return 0;
}