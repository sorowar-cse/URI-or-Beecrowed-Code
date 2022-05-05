#include <stdio.h>
#include <math.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    //Int' Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    int a, b, t;
    scanf("%d%d", &a, &b);
    
    if(a == b)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if(a < b)
        {
            t = b - a;
            printf("O JOGO DUROU %d HORA(S)\n", t);
        }
        else if(a > b)
            {
                t =(b+24) - a;
                printf("O JOGO DUROU %d HORA(S)\n", t);
            }
    return 0;
}

    