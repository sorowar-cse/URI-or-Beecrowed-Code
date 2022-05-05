         /*   BismillahHir Rahmanir Rahim   */
    /*  Author: Sorowar Mahabub, 01521-564157  */
 
#include<stdio.h>
int main()
{
    int X,i,j=0,k;
    for(k = 0; k < 100; k++)
    {
        scanf("%d",&X);
        if(X==0)
            break;
        else if(X%2==0)
        {
            for(i = X; i <= X+8; i+=2)
            j += i;
        }
        else 
        { 
            X++;
            for(i = X;i <= X+8;i+=2)
            j += i;
        }
        printf("%d\n",j);
        j=0;
}
    return 0;
}