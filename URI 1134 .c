         /*   BismillahHir Rahmanir Rahim   */
    /*  Author: Sorowar Mahabub, 01521-564157  */
 
#include <stdio.h>
int main()
{
    int x, a= 0, b= 0, c= 0;
    
    while(1)
    {
        scanf("%d", &x);
        if(x == 4)
        break;
        if(x == 1)
        a += 1;
        if(x == 2)
        b += 1;
        if(x == 3)
        c += 1;
    }
    
    printf("MUITO OBRIGADO\nAlcool: %d\n", a);
    printf("Gasolina: %d\nDiesel: %d", b, c);

    return 0;
}