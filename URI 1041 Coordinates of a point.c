

#include <stdio.h>
#include <math.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    //Int' Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    double x, y;
    scanf("%lf%lf", &x, &y);
    
    if(x == 0 && y == 0)
    {
        printf("Origem\n");
    }
    else if(x == 0 && y > 0)
    {
        printf("Exio X\n");
    }
    else if(x > 0 && y == 0)
    {
        printf("Exio Y\n");
    }
    else if(x > 0 && y > 0)
    {
    printf("Q1\n");
    }
    else if(x < 0 && y > 0)
    {
    printf("Q2\n");
    }
    else if(x < 0 && y < 0)
    {
    printf("Q3\n");
    }
    else if(x > 0 && y < 0)
    {
    printf("Q4\n");
    }
    return 0;
}