#include <stdio.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    //Int' Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    double a, b, t;
    scanf("%lf", &a);
    b = 2000.00;
    
    if(a >= 0 && a <= 2000.00)
    {
        printf("Isento");
    }
    else if(a >= 2000.01 && a <= 3000.00)
    {
        t = (a - b) * 0.08;
    }
    else if(a >= 3000.01 && a <= 4500.00)
    {
        t = (a - b) * 0.18;
    }
    else if(a > 4500.00)
    {
        t = (a - b) * 0.28;
    }
    
    printf("R$ %.2lf", t);
    
    return 0;
}

                