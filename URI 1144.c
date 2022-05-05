         /*   BismillahHir Rahmanir Rahim   */
    /*  Author: Sorowar Mahabub, 01521-564157  */
 
#include <stdio.h>
int main()
{
    int n, x= 1, y, z, m;
    scanf("%d", &n);
   
    for(m = 0; m < n ; m++)
    {
        y= x*x;
        z= x*x*x;
        printf("%d %d %d\n", x, y, z);
        
        printf("%d %d %d\n", x, y+1, z+1);
        x++;
    }

    return 0;
}