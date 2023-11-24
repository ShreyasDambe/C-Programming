
              ///////////////////////////////////////////////
             //                                           //
            //   Take Single Character Thriugh A to Z    //
           //     (only even no)                        //
          //                                           //
         ///////////////////////////////////////////////



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ivalue =0;
     for(ivalue='A'; ivalue<='Z' ;ivalue++)
     {

            if(ivalue%2==0)
                {
                    printf("%d\n",ivalue);
                }
     }
     getch();
     return 0;
}
