//*
//**
//***
//****
//12345





#include <stdio.h>
#include <stdlib.h>

int main()
{
   int irow=0;
   int icol=0;

   int inum1=0;
   int inum2=0;

   printf("enter number of Row:");
   scanf("%d",&irow);

   printf("enter number of Col:");
   scanf("%d",&icol);

   for(inum1=1;inum1<=irow;inum1++)
   {
       for(inum2=1;inum2<=inum1;inum2++)
       {
           if(inum1==5)
           {
               printf("%d ",inum2);
           }
           else
           {
               printf("* ");
           }
       }
       printf("\n");
   }


    return 0;
}
