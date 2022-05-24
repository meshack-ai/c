// c program that takes in your ful names and prints out
#include <stdio.h>
int main(){

    char name[30];

     printf("Enter your full name :  ");
     fgets(name, sizeof(name), stdin);

      name[0] = 'U';
      printf("%s", name);
       return 0;
}