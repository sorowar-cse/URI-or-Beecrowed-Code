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
    while(x <= y)
    {
        if(x%13 != 0)
        {
            s +=x;
            x++;
        }
        else x++;
    }
    printf("%d\n", s);
    return 0;
}