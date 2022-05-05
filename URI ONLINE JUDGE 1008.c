#include<stdio.h>

int main()
{


    int id, hr;
    double sal, Total;
    
    scanf("%d%d%lf", &id, &hr, &sal);
    
    
    Total = hr * sal;
    
    printf("NUMBER = %d\nNSALARY = U$ %.2lf\n", id, Total);
    
    
    return 0;
 
}