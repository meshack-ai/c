#include <stdio.h>
int main()
{
    int age ;
    printf("Enter your age: ");
    scanf("%d", &age);
     
      if (age >= 18)
          printf("You are eligible to vote in kenya");
      
      else 
          printf("Sorry you are not eligible to vote");
      
      
      return 0;

}