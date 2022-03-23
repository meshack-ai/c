/*Addition program*/
#include <stdio.h>
main()
{
    int integer1, integer2, sum;
    printf("Enter first integer\n");/*prompt*/
    scanf("%d", &integer1); /*read the integer*/
    printf("Enter second integer\n");
    scanf("%d", &integer2);
    sum = integer1+integer2;
    printf("sum is %d\n", sum);
    return 0;

}
