         /*   BismillahHir Rahmanir Rahim   */
    /*  Author: Sorowar Mahabub, 01521-564157  */
 
#include <stdio.h>
int main()
{
    int n, x= 1, y= 2, z= 3, m;
    scanf("%d", &n);
    
    for(m = 0; m < n ; m++)
    {
        printf("%d %d %d PUM\n", x, y, z);
        x +=4;
        y +=4;
        z +=4;
    }

    return 0;
}