#include <stdio.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    //Int' Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    double a, b, t, x, z, y;
    scanf("%lf", &a);
    b = 2000.00;
    
    if(a >= 0 && a <= 2000.00)
    {
        printf("Isento\n");
    }
    else if(a >= 2000.01 && a <= 3000.00)
    {
        t = (a - b) * 0.08;
        printf("R$ %.2lf\n", t);
    }
    else if(a >= 3000.01 && a <= 4500.00)
    {
        x = (a - b - 1000.00) * 0.18;
        y = 1000.00 * 0.08;
        t = x + y;
        printf("R$ %.2lf\n", t);
    }
    else if(a > 4500.00)
    {
        x = (a - b - 2500.00) * 0.28;
        y = 1500.00 * 0.18;
        z = 1000.00 * 0.08;
        t = x + y + z;
        printf("R$ %.2lf\n", t);
    }
    
    return 0;
}

                