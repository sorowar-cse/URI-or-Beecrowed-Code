#include<stdio.h>
#include<stdlib.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    // International Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    int a, b, c, x, y;
    scanf("%d%d%d", &a, &b, &c);
    
    x = (a + b + abs(a - b)) /2;
    y = (x + c + abs(x - c)) /2;
    
    printf("%d eh o maior\n", y);
    return 0;
 
}