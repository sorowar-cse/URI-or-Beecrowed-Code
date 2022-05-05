#include <stdio.h>
#include <math.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    // International Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    int sc, h, m, s, mm;
    scanf("%d", &sc);
    
    h = sc / 3600;
    mm = sc % 3600;
    m = mm / 60;
    s = mm % 60;
    
    printf("%d:%d:%d\n", h, m, s);
    
    
    return 0;
 
}