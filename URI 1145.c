         /*   BismillahHir Rahmanir Rahim   */
    /*  Author: Sorowar Mahabub, 01521-564157  */
 
#include<stdio.h>
int main()
{
    int n, a, i, j, k, l, m=1;
    scanf("%d %d",&a, &n); // a= 2, n= 6
    
    k = n / a; // k= 3
    l=a; // l= 2
    for(i = 1;i <=k;i++)
    {
        printf("%d", m);
        for(j=m+1; j<=l; j++)
        {
            printf(" %d", j);
        }
        printf("\n");
        m += a;
        l += a;
    }
    return 0;
}
