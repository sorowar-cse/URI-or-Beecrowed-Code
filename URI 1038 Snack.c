

#include <stdio.h>
#include <math.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    //Int' Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    int x, y;
    double z;
    scanf("%d%d", &x, &y);
    
    if(x == 1){
        z = 4.00;
    }
    else if(x == 2){
        z = 4.50;
    }
    else if(x == 3){
        z = 5.00;
    }
    else if(x == 4){
        z = 2.00;
    }
    else if(x == 5){
        z = 1.50;
    }
    double T;
    T = z * y;
    
    printf("Total: R$ %.2lf\n", T);
    return 0;
 }

   