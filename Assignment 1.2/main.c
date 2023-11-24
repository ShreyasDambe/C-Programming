              //////////////////////////////////////////////
             //                                          //
            //   Take Single Character Thriugh A to Z   //
           //                                          //
          //////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ivalue = 0;

    for(ivalue = 'A'; ivalue <= 'Z'; ivalue++)
    {
        printf("%d\n",ivalue);
    }

    getch();

    return 0;
}
