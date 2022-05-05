         /*   BismillahHir Rahmanir Rahim   */
    /*  Author: Sorowar Mahabub, 01521-564157  */
 
#include<stdio.h>
int main()
{
    int i;
    double S=0, j=1.0;
    for (i = 1;i <= 100;i++)
    {
        S = S + (1/j);
        j++;
    }
    printf("%.2lf\n", S);
    return 0;
}