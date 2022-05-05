#include<stdio.h>
#include<math.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    // International Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    double x1, y1, x2, y2, D;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    
    D = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    
    printf("%.3lf km/l\n", D);
    return 0;
 
}