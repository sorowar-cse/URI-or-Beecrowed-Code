         /*   BismillahHir Rahmanir Rahim   */
    /*  Author: Sorowar Mahabub, 01521-564157  */
 
#include<stdio.h>
int main()
{
    int x, m, a, c;
    scanf("%d", &x);
    a= 1;
    
    for(m=x; m>=1; m--)
    {
        a= a * m;
    }
    printf("%d\n", a);
    return 0;
}