#include<stdio.h>

int main()
{

    char Name [30];
    double sal, sell, Total;
    
    gets(Name);
    scanf("%lf%lf", &sal, &sell);
    
    
    Total = sal + (sell * 0.15);
    
    printf("Total = R$ %.2lf\n", Total);
    return 0;
 
}