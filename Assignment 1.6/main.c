              ///////////////////////////////////////////////
             //                                           //
            //     @'s ASCCII value is 64(character      //
           //                                           //
          ///////////////////////////////////////////////





#include <stdio.h>
#include <stdlib.h>

int main()
 {
     int ivalue=0;

     for(ivalue=0;ivalue<=127;ivalue++)
     {
         printf("%c's ASCCII value is %d\n",ivalue,ivalue);
     }

     getch();
     return 0;
 }


