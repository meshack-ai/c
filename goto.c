#include <stdio.h>
 int main(){
     const int maxInput = 100;
     int i;
     double number, avarage, sum = 0.0;
      for (i = 1; i <= maxInput; ++i) {
          printf("%d. Enter a number: ", i);
          scanf("%lf", &number);
          if (number < 0.0 ){
              goto jump;

          }
          sum += number;

      }
      jump:
      avarage = sum / (i - 1);
      printf("Sum = %.2f\n", sum);
      printf("Avarage = %.2f", avarage);
      return 0;
 }