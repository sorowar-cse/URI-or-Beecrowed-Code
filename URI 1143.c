         /*   BismillahHir Rahmanir Rahim   */
    /*  Author: Sorowar Mahabub, 01521-564157  */
 
#include <stdio.h>
int main()
{
    int n, x= 1, m;
    scanf("%d", &n);
    
    for(m = 0; m < n ; m++)
    {
        printf("%d %d %d\n", x, x*x, x*x*x);
        x++;
    }

    return 0;
}