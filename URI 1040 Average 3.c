

#include <stdio.h>
#include <math.h>
int main()
{
    //Author is Sorowar Mahabub
    //Studies B. Sc in CSE
    //Int' Islamic University Chittagong (IIUC)
    //Cell: 01834-756433
    //Email: sorowarmahabub1709vip@gmail.com
    
    double a, b, c, d;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    
    double avrg; // For printing the Average (Media)
    avrg = (a*2 + b*3 + c*4 + d*1) / (2+3+4+1);
    printf("Media: %.1lf\n", avrg);
    
    if( avrg >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if( avrg < 5.0){
        printf("Aluno reprovado.\n");
    }
    else if ((avrg > 5.0) && (avrg < 7.0))
    {
        printf("Aluno em exame.\n");
    
        double x; //Told to input One more score as Exam score
        scanf("%lf", &x);
        printf("Nota do exame: %.1lf\n", x);
    
        double avrg2; // For printing the Average2
        avrg2 = (avrg + x) / 2;
    
        if(avrg2 >= 5.0){
            printf("Aluno aprovado.\n");
        }
        else if(avrg2 <=4.9){
            printf("Aluno reprovado.\n");
        }
            printf("Media Final: %.1lf\n", avrg2);
    }
    return 0;
 }

   