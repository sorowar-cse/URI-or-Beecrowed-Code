#include <stdio.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    //Int' Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    int a, b, c, d, th, td, tm, x, y, z, w;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    
    x = a * 60;
    y = c * 60;
    
    z = x + b;
    w = y + d;
    
    if(z == w)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(z > w)
    {
        td = (24 * 60) - (z - w);
        th = td / 60;
        tm = td % 60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", th, tm);
    }
    else if(z < w)
    {
        td = w - z;
        th = td / 60;
        tm = td % 60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", th, tm);
    }
    return 0;
}

    