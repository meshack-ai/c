//Program to take 5 inputs from the user and store them in an array
//print the elements in an array
#include <stdio.h>

int main(){
    int values[5];
        printf("Enter the 5 integers:   ");

          for(int i = 0; i<5; ++i ){
        scanf("%d", &values[i]);
    }
    printf("Displaying intergers:\n ");


    for(int i = 0; i<5; ++i){
        printf("%d\n", values[i]);
    }

    return 0;
}

