
#include <stdio.h>
#include <math.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    //Int' Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    int m, x, n, ar[1000];
    scanf("%d", &m);
    ar[0]= 0;
    ar[1]= 1;
    n= 2;
    while(n < m)
    {
        ar[n] = ar[n-2] + ar[n-1];
        n++;
    }
    
    while(x < m)
    {
        printf("%d ", ar[x]);
        x++;
    }
    printf("\n");
    return 0;
}