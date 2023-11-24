              ///////////////////////////////////////////////////
             //                                               //
            //     A's ASCCII value is 65 and address is     //
           //                                               //
          ///////////////////////////////////////////////////







#include <stdio.h>
#include <stdlib.h>

int main()
{
   int ivalue=0;

   for(ivalue=65;ivalue<=90;ivalue++)
   {
       printf("%c's ASCCII value is %d and address is %d\n",ivalue,ivalue,&ivalue);
   }

   getch();
   return 0;
}
