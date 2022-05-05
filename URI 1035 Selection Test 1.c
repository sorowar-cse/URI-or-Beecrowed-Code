#include <stdio.h>
#include <math.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    //Int' Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    int A, B, C, D;
    scanf("%d%d%d%d", &A,&B, &C, &D);
    
    if((B>C) && (D>A) && 
    ((C+D)>(A+B)) && ((C>=0) 
    && (D>=0)) && (A%2 == 0))
    {
    
    printf("Valores aceitos\n");
    
    }
    else 
    
        printf("Valores nao aceitosn\n");
     return 0;
 }
   