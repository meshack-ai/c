//checking whether a number is odd or even

#include <stdio.h>
int main()
{
    int i;
    printf("Enter a number: ");
// inputing the number
    scanf("%d", &i);
     if (i%2 == 0){
         printf("%d is an even number", i);
     }
     else
     printf("%d is an odd number", i);
}