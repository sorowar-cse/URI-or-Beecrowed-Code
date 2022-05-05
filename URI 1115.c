
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
    while(1)
    {
    scanf("%lf%lf", &x, &y);
    
    if(x == 0 || y == 0)
    {
        break;
    }
     
    else if(x > 0 && y > 0)
    {
    printf("primeiro\n");
    }
    else if(x < 0 && y > 0)
    {
    printf("segundo\n");
    }
    else if(x < 0 && y < 0)
    {
    printf("terceiro\n");
    }
    else if(x > 0 && y < 0)
    {
    printf("quarto\n");
    }
    }
    return 0;
}