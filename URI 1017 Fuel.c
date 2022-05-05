#include <stdio.h>
#include <math.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    // International Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    int spenttime, averagespeed;
    double T;
    scanf("%d%d", &spenttime, &averagespeed);
    
    T = (spenttime * averagespeed) / 12.0;
    
    printf("%.3lf\n", T);
    return 0;
 
}