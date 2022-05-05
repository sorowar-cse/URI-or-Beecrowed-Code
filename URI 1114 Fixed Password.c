#include<stdio.h>

int main()
{
    int m;
    while(1)
    {
        scanf("%d", &m);
        if(m == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        printf("Senha Invalida\n");
        
      /*  while(m <= n)
        {
            sum += m;
            printf("%d ", m);
            
            m++;
        }
        printf("Sum=%d\n", sum);
        sum= 0;*/
    }
    
    return 0;
}