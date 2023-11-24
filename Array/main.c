#include <stdio.h>

 //int iAge[6];    //globaly Declaire
int main()
{
   // int iAge[6]={10,20,30,40,50,60};       Member Initilization List

const int isize=6;
   int iAge[isize];          //local Declaire
   int icount=0;

   iAge[0]=10;
   iAge[4]=30;
   iAge[5]=60;

   for(icount=0;icount<=5;icount++)
   {
       printf("%d\n",iAge[icount]);
   }

}
