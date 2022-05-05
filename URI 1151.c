#include <stdio.h>
int main()
{
    int x,y, a=0,b=1,c=0;
    scanf("%d", &x);
    y= 1;
    
    //Author: Sorowar Mahabub
    
    while(y < x)
    {
        if(y%2==1)
        {
            printf("%d ",c);
            c=a+b;
            a=c;
        }
        else if(y==2)
            printf("%d ",c);
        else if(y%2==0)
        {
            printf("%d ",c);
            c=a+b;
            b=c;
        }
        y++;
    }
    printf("%d\n",c);
    return 0;
}