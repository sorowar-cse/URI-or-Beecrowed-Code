#include<stdio.h>

int main()
{
    int n, x= 1;
    scanf("%d", &n);
    
    while(x <= n)
    {
        printf("%d\n", x);
        x = x + 2;
    }
    return 0;
}