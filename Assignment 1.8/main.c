              ///////////////////////////////////////////////////
             //                                               //
            //     Starting & ending character from user     //
           //      and seqence print                        //
          ///////////////////////////////////////////////////






#include <stdio.h>
#include <stdlib.h>

void main()
{
    char cchar1='\0';
    char cchar2='\0';
    char cchar3='\0';

    printf("Enter a starting character:",cchar1);
    scanf("%c",&cchar1);

    printf("Enter a Ending Character:",cchar2);
    scanf("%s",&cchar2);

    for(cchar3=cchar1;cchar3<=cchar2;cchar3++);
    {
        printf("%c",cchar3);
    }

    getch();
    return 0;
}
