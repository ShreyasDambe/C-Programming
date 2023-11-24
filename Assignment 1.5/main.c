              ///////////////////////////////////////////////
             //                                           //
            //        A's ASCCII value is 65             //
           //                                           //
          ///////////////////////////////////////////////





#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cvalue='\0';
    for(cvalue='A';cvalue<='Z';cvalue++)
    {
        printf("%c's ASCCII value is %d\n",cvalue,cvalue);
    }

    getch();
    return 0;
}
