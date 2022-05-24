/* c program to finf Quadratic equation using switch case*/

#include <stdio.h>
#include <math.h>  /*used for sqrt() */

int main ()
{
     float a, b, c;
     float root1, root2, imaginary;
     float discriminant;

     printf("Enter values of a, b, c of quadratic equation (ax^2 + bx + c :  ");
     scanf("%f%f%f", &a, &b, &c);

/*claculating discriminant*/
      discriminant =(b * b) - (4 * a *c);
      
       
       /*compute roots of quadratic equation based on the nature of the discriminant*/
             switch(discriminant > 0)
      {
             case 1:
             /* if discriminat is positive*/
             root1 = (-b + sqrt(discriminant)) / (2 * a);
             root2 = (-b - sqrt(discriminant)) / (2 * a);

       printf("Two distinct complex roots exists: %.2f and %.2f",
       root1, root2);
       break;

       case 0:
             /*if discriminant is zero*/
             switch (discriminant < 0)
             {
             case 1:
              /* if discriminant is negative*/
             root1 = root2 = -b / (2 * a);
             imaginary = sqrt(-discriminant) / (2 * a);

             printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f and %.2f - i%.2f",
             root1, imaginary, root2, imaginary);
             break;

            case 0:
            /*if discriminat is zero*/
            root1 =root2 = -b / (2 * a);
            
            printf("Two equal and real roots exists: %.2f and %.2f, root1, root2");
            
            break;  
            }
}

return 0;    
}
