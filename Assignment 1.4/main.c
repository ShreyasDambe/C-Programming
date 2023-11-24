              ///////////////////////////////////////////////
             //                                           //
            //   Take Single Character Thriugh A to Z    //
           //     (65 = A)                              //
          //                                           //
         ///////////////////////////////////////////////





#include <stdio.h>
#include <stdlib.h>

int main()
{
   int ivalue=0;
    for(ivalue =65;ivalue<=90;ivalue++)
    {
        printf("%d=%c\n",ivalue,ivalue);
    }

    getch();
    return 0;
}
