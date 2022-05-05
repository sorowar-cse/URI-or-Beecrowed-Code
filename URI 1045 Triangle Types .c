#include <stdio.h>
#include <math.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    //Int' Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    double a, b, c, min, mid, max;
    scanf("%lf%lf%lf", &a, &b, &c);
    
    if(a>b && a>c)
    {
        max = a;
        if(b>c)
        {
            mid = b;
            min = c;
        }
        else {
                mid = c;
                min = b;
             }
    }
    else if(b>a && b>c)
         {
            max = b;
            if(a>c)
            {
                mid = a;
                min = c;
            }
            else {
                     mid = c;
                     min = a;
                 }
         }
    else {
            max = c;
            if(a>b)
            {
                mid = a;
                min = b;
            }
            else {
                    mid = b;
                    min = a;
                 }
         }
        
   if(max>=mid+min)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(max*max==mid*mid+min*min)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if(max*max>mid*mid+min*min)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(max*max<mid*mid+min*min)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    
    if(max==mid && max==min)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    
    if((max==mid || max==min || mid==min) && (max!=mid|| max!=min || mid!=min))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}

