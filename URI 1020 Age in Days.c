#include <stdio.h>
#include <math.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    // International Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    int age, y, m, d, mm;
    scanf("%d", &age);
    
    y = age / 365;
    mm = age % 365;
    m = mm / 30;
    d = mm % 30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);
    
    
    return 0;
 
}