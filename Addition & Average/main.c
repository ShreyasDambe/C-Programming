#include <stdio.h>

int Addition(int ino1,int ino2,int ino3,int ino4,int ino5);
int Average(int ino1,int ino2,int ino3,int ino4,int ino5);                 //Function Declaration

int Addition(int ino1,int ino2,int ino3,int ino4,int ino5)                      //Function Defination
{
    int iAns =0;
    iAns=ino1+ino2+ino3+ino4+ino5;

    return iAns;

}

int Average(int ino1,int ino2,int ino3,int ino4,int ino5)                      //Function Defination
{
    int iAns =0;
    iAns=ino1+ino2+ino3+ino4+ino5/5;

    return iAns;

}


int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int ivalue3=0;
    int ivalue4=0;
    int ivalue5=0;

    int iResult=0;

    printf("Enter First value:");
    scanf("%d",&ivalue1);

    printf("Enter Second value:");
    scanf("%d",&ivalue2);

    printf("Enter Third value:");
    scanf("%d",&ivalue3);

    printf("Enter Forth value:");
    scanf("%d",&ivalue4);

    printf("Enter Fifth value:");
    scanf("%d",&ivalue5);

    iResult= Addition( ivalue1, ivalue2,ivalue3,ivalue4,ivalue5);             //function call
    printf("Addition of %d ,%d ,%d ,%d and %d is: %d",ivalue1,ivalue2,ivalue3,ivalue4,ivalue5,iResult);

    iResult= Average( ivalue1, ivalue2,ivalue3,ivalue4,ivalue5);             //function call
    printf("Average of %d ,%d ,%d ,%d and %d is: %d",ivalue1,ivalue2,ivalue3,ivalue4,ivalue5,iResult);


    return 0;
}
