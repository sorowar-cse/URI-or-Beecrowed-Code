#include <stdio.h>
#include <math.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    //Int' Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    int a, b, c;
    scanf("%d%d", &a, &b);
    
    if(b%a == 0 || a%b == 0)
    {
        printf("Sao Multiplos\n");
    }
    else printf("Nao sao Multiplos\n");
    return 0;
}