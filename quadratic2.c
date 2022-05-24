// quadratic formula
#include <stdio.h>
# include <math.h>
  int main(){
      float a, b, c, discriminant, root1, root2, realpart, imagpart;
      printf("Enter the coefficients: ");
      scanf("%f%f%f", &a, &b, &c);
       discriminant =b * b - 4 * a  * c;

       //conditions for real  and different roots
       if (discriminant > 0){
           root1 = (-b + sqrt(discriminant))/(2 * a);
           root2 = (-b - sqrt(discriminant))/(2 * a);
           printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
       }

       
       //condition for real and equal roots
       else if (discriminant == 0){
           root1 = root2 = -b/(2 * a);
           printf("root1 = root2 = %.2lf;", root1);
       }
        //if the roots are not equal
        else{
            realpart = -b / (2 * a);
            imagpart =sqrt(-discriminant) / (2 * a);
            printf("root1 =%2.lf+%2.lfi and root2 = %.2f-%.2fi", realpart, imagpart, realpart, imagpart);
        }

        return 0;
  }