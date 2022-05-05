         /*   BismillahHir Rahmanir Rahim   */
    /*  Author: Sorowar Mahabub, 01521-564157  */
 
#include <stdio.h>
int main()
{
    int x, y, a, s= 0;
    scanf("%d%d", &x, &y);
    
    if(x> y)
    {
        a= x;
        x= y;
        y= a;
    }
    while(x < y)
    {
        x++;
        if(x != y && (x%5 == 2 || x%5 == 3))
        {
            printf("%d\n", x);
        }
    }
    
    return 0;
}