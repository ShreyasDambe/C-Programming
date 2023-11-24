#include <stdio.h>

int Addition(int ino1,int ino2);                 //Function Declaration

int Addition(int ino1,int ino2)                      //Function Defination
{
    int iAns =0;
    iAns=ino1+ino2;

    return iAns;

}

int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int iResult=0;

    printf("Enter First value:");
    scanf("%d",&ivalue1);

     printf("Enter Second value:");
    scanf("%d",&ivalue2);

    iResult= Addition( ivalue1, ivalue2);             //function call

    printf("Addition of %d and %d is: %d",ivalue1,ivalue2,iResult);

    return 0;
}

/*#include<stdio.h>


int Addition(int inum1 ,int inum2);

int Addition(int inum1 ,int inum2)
{


    int isum=0;

    isum=inum1+inum2;

}

int main()
{
    int ino1=0;
    int ino2=0;

    int iresult;

    printf("Enter a First Number for Addition:");
    scanf("%d",&ino1);

    printf("Enter a Second Number for Addition:");
    scanf("%d",&ino2);

    iresult=Addition(ino1,ino2);

    printf("Addition of two Numbers is:%d",iresult);


 return 0;
}*/
