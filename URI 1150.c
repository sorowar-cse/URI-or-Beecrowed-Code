         /*   BismillahHir Rahmanir Rahim   */
    /*  Author: Sorowar Mahabub, 01521-564157  */
 
#include<stdio.h>
int main()
{
    int x, z, m, a, c;
    scanf("%d%d", &x, &z);
    a= 1;
    c= 0;
    while(x >= z)
    {
        scanf("%d", &z);
    }
    for(m=x; m<z; m++)
    {
        c +=m;
        if(c > z)
            break;
        a++;
    }
    printf("%d\n", a);
    return 0;
}