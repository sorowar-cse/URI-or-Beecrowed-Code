#include <stdio.h>
#include <math.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    //Int' Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    int a, b, c, min, mid, max;
    scanf("%d%d%d", &a, &b, &c);
    
    if(a<b && a<c)
    {
        min = a;
        if(b<c)
        {
            mid = b;
            max = c;
        }
        else {
                mid = c;
                max = b;
             }
    }
    else if(b<a && b<c)
         {
            min = b;
            if(a<c)
            {
                mid = a;
                max = c;
            }
            else {
                     mid = c;
                     max = a;
                 }
         }
    else {
            min = c;
            if(a<b)
            {
                mid = a;
                max = b;
            }
            else {
                    mid = b;
                    max = a;
                 }
         }
        
    printf("%d\n%d\n%d\n\n", min, mid, max);
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}

1042 Sorowar