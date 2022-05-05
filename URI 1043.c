#include <stdio.h>
#include <math.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    //Int' Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    double a, b, c, p, ar;
    scanf("%lf%lf%lf", &a, &b, &c);
    
    if((a+b > c) && (b+c > a) && (c+a >b))
    {
        p = a+b+c;
        printf("Perimetro = %.1lf\n", p);
    }
    else {
            ar = 0.5*(a+b)*c;
            printf("Area = %.1lf\n", ar);
         }
    return 0;
}