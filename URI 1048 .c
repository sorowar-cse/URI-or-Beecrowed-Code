#include <stdio.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    //Int' Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    
    double a, s;
    scanf("%lf", &a);
    
    if(a >= 0 && a <= 400.00)
    {
        s = a * 0.15;
        printf("Novo salario: %.2lf\n", a+s);
        printf("Reajuste ganho: %.2lf\n", s);
        printf("Em percentual: 15 %%");
    }
    else if(a >= 400.01 && a <= 800.00)
    {
        s = a * 0.12;
        printf("Novo salario: %.2lf\n", a+s);
        printf("Reajuste ganho: %.2lf\n", s);
        printf("Em percentual: 12 %%");
    }
    else if(a >= 800.01 && a <= 1200.00)
    {
        s = a * 0.10;
        printf("Novo salario: %.2lf\n", a+s);
        printf("Reajuste ganho: %.2lf\n", s);
        printf("Em percentual: 10 %%");
    }
    else if(a >= 1200.01 && a <= 2000.00)
    {
        s = a * 0.07;
        printf("Novo salario: %.2lf\n", a+s);
        printf("Reajuste ganho: %.2lf\n", s);
        printf("Em percentual: 7 %%");
    }
    else if(a >= 2000.01)
    {
        s = a * 0.04;
        printf("Novo salario: %.2lf\n", a+s);
        printf("Reajuste ganho: %.2lf\n", s);
        printf("Em percentual: 4 %%");
    }
    
    return 0;
}

                