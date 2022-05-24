//program to find the avarage of n numbers using arrays

#include <stdio.h>
 int main (){

     int marks[10],i,n, sum = 0, average;

     printf("Enter the numbers of elements: ");
       scanf("%d", &n);

       for (i = 0; i < n; ++i){

           printf("Enter the number%d:",i+1);
           scanf("%d", &marks[i]);

           sum += marks[i];
       }
       average = sum / n;
       printf ("Avarage = %d", average);
       return 0;
 }