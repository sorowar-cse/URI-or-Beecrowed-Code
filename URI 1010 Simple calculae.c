#include<stdio.h>

int main()
{


    int cp1, cp2, up1, up2;
    double pp1, pp2, Value;
    
    scanf("%d%d%lf", &cp1, &up1, &pp1);
    scanf("%d%d%lf", &cp2, &up2, &pp2);
    
     
    Value = ((up1 * pp1) + (up2 * pp2));
    printf("Valor a pagar: R$ %.2lf\n", Value);    
    
    return 0;
 
}