#include <stdio.h>
#include <math.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    // International Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    int n;
    int n0, n1, n2, n3, n4;
    int n5, n6, n7, n8;
    int n9, n10, n11, n12;
    
    scanf("%d", &n);
    printf("%d\n", n);
    
    n0 = n/ 100;
    printf("%d nota(s) de R$ 100,00\n", n0);
   
    n1 = n % 100;
    n2 = n1/ 50;
    printf("%d nota(s) de R$ 50,00\n", n2);
  
    n3 = n1 % 50;
    n4 = n3/ 20;
    printf("%d nota(s) de R$ 20,00\n", n4);
   
    n5 = n3 % 20;
    n6 = n5/ 10;
    printf("%d nota(s) de R$ 10,00\n", n6);
   
    n7 = n5 % 10;
    n8 = n7/ 5;
    printf("%d nota(s) de R$ 5,00\n", n8);
   
    n9 = n7 % 5;
    n10 = n9/ 2;
    printf("%d nota(s) de R$ 2,00\n", n10);
   
    n11 = n9 % 2;
    printf("%d nota(s) de R$ 1,00\n", n11);
  
    return 0;
 
}