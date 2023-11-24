
               ////////////////////////////////
              //         *                  //
             //          * *               //
            //           * * *            //
           //            * * * *         //
          //             1 2 3 4 5      //
         ////////////////////////////////






/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inum1=0;
    int inum2=0;
    int inum3=0;

    int irow=0;
    int icol=0;

     printf("Enter a number of rows :");
    scanf("%d",&irow);
    printf("Enter a number of col :");
    scanf("%d",&icol);

    for(inum1=1;inum1<=irow;inum1++)
    {
        for(inum2=5;inum2<=inum1;inum2--)
        {
            if(inum1==5)
            {
                printf("%d",inum2);
            }
            else
            {
                printf("*");

            }

        }
        printf("\n");
    }
    return 0;
}*/


/*#include <stdio.h>
int main()
{
    int inum1=0;
    int inum2=0;

    int irow=0;


    printf("Enter a number of rows :");
    scanf("%d",&irow);


    for(inum1=1;inum1<=irow;inum1++)
    {
            for(inum2=1;inum2<=inum1;inum2++)
            {
              if(inum1==5)
              {
                  printf("%d",inum2);
              }
              else
              {
                  printf("*");
              }
            }

            printf("\n");
    }
    return 0;
}*/

#include<stdio.h>

int main()
{
    int inum1=0;
    int inum2=0;
    int inum3=0;

    int irow=0;
    int icol=0;

   printf("Enter a Row:");
   scanf("%d",&irow);

   printf("Enter a Col:");
   scanf("%d",&icol);

   for(inum1=1;inum1<=irow;inum1++)
   {
       for(inum2=1;inum2<=inum1;inum2++)
       {
           if(inum1==5)
           {
               printf("%d",inum2);
           }
           else
           {
               printf("*");
           }

       }
       printf("\n");
   }




  return 0;
}


