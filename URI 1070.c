#include<stdio.h>

int main()
{
    int n, x= 1;
    scanf("%d", &n);
    x = n ;
    while(x <= n+10)
    {
        x = x + 1;
        printf("%d\n", x);
        x = x + 1;
    }
    return 0;
}