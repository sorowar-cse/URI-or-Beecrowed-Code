#include <stdio.h>
#include <math.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    // International Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    int num, n, o, oo, m;
    scanf("%d", &num);
    
    n = num / 100;
    o = num % 100;
    oo = o / 10;
    m = num % 10;
    printf("%d\n%d\n%d", n, oo, m);
    
    return 0;
 
}