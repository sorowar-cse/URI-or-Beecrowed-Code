/*   BismillahHir Rahmanir Rahim   */
    /*  Author: Sorowar Mahabub, 01521-564157  */
 
#include<stdio.h>
int main()
{
    int N, m;
    
    while(1)
    {    
        scanf("%d", &N);
        if(N == 0)
                break;
        for(m= 1; m<N; m++)
        {
            printf("%d ", m);
        }
        printf("%d", N);
        printf("\n");
    }
    return 0;
}


    