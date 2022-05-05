#include<stdio.h>

int main()
{


    
    double A, B, C, T, Ci, Tr, S, R;
    scanf("%lf%lf%lf", &A, &B, &C);
    
    T = 0.5 * A * C;
    Ci = 3.14159 * C * C;
    Tr = 0.5 * (A +B) * C;
    S = B * B;
    R = A * B;
    
    printf("TRIANGULO: %.3lf\n", T);   
    printf("CIRCULO: %.3lf\n", Ci); 
    printf("TRAPEZIO: %.3lf\n", Tr); 
    printf("QUADRADO: %.3lf\n", S); 
    printf("RETANGULO: %.3lf\n", R); 
    
    return 0;
 
}