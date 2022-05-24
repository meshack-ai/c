#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d,x1,x2,real,imag;
    printf("Enter coefficient: ");
    scanf("%f%f%f", &a,&b,&c);
       d = b*b -4*a*c ;
       if(d > 0)

       {x1=(-b + sqrt(d))/(2 * a);
       x2=(-b-sqrt(d))/(2*a);
       printf("distinct roots x1=%f,x2=%f",x1,x2);
       }
       else if(d == 0)
       {
           x1 = -b/(2*a);
           printf("Equal roots, x1=%f",x1);
       }
       else{
           real= -b/(2*a);
           imag=(sqrt(d))/(2*a);
           printf("complex roots, x1=%f+%f i");
           x2 =("%f-%f i, real,imag,real,imag");
       }
       return 0;
}