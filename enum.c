#include <stdio.h>
 enum week {sunday, monday, tuesday, wednesday, thursday, friday, saturday};
 int main()
  {
      // creating today variable of enum week type
       enum week today;
       today = thursday;
        printf("Day %d", today+1);
         
         return 0;
  }