         /*   BismillahHir Rahmanir Rahim   */
    /*  Author: Sorowar Mahabub, 01521-564157  */
 
#include<stdio.h>
int main()
{
    int x;
    double s, m, age;
    s= m= 0;
    while(1)
    {
        scanf("%d", &x);
        m +=1;
        if(x < 0)
            break;
        s +=x;
    }
    age= s/(m-1);
    printf("%.2lf\n", age);
    return 0;
}